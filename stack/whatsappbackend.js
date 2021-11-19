import express from 'express'
import mongoose from 'mongoose'
import Messages from './dbMessages.js'
import cors from 'cors'
import Pusher from "pusher"
const port = process.env.PORT || 9000;

const uri = 'mongodb+srv://root:root@cluster0.yxgu2.mongodb.net/TestDb?retryWrites=true&w=majority';
mongoose.connect(uri,{
    useCreateIndex:true,
    useNewUrlParser:true,
    useUnifiedTopology:true
})
const pusher = new Pusher({
    appId: "1157888",
    key: "1e0d80e5bb46ba6b7252",
    secret: "eb4cdc4e71c2e175964d",
    cluster: "eu",
    useTLS: true
  });
const app = express();
const db = mongoose.connection;
db.once('open',()=>{
    console.log("DB connected")
    const msgCollection = db.collection('messagecontents');
    const changeStream = msgCollection.watch();
    changeStream.on('change',(change)=>{
        console.log(change)
        if(change.operationType==='insert'){
            const messageDetails = change.fullDocument;
            pusher.trigger('messages','inserted',{
                name:messageDetails.name,
                message:messageDetails.message,
                timestamp:messageDetails.timestamp,
                received:messageDetails.received,
            });
        }else{
            console.log("error triggering")
        }
    })
})
app.use(express.json());
app.use(cors());


app.get('/',(req,res)=>{
res.status(200).send('hello world')
});
app.get('/messages/sync',(req,res)=>{
    Messages.find((err,data)=>{
        if(err){
            res.status(500).send(err)
        }else{
            res.status(200).send(data)
        }
    })

})
app.post('/messages/new',(req,res)=>{
    const dbMessage=req.body;
    Messages.create(dbMessage,(err,data)=>{
        if(err){
            res.status(500).send(err)
        }else{
            res.status(201).send(data)
        }
    })

})
app.listen(port,()=>console.log("Lstening on localhost:"+port));