#include<iostream>
using namespace std;
class knapsack
{
int m,n; //m is knapsack capacity, n = no of objects.
float w[100],p[100];
float x[100],pw_ratio[100];
public:
    void get();
    void calc();
    void display();
};
void knapsack::get()
{
    float temp;
    int t;
    cout<<"\nEnter the maximum capacity of knapsack :";
    cin>>m;
    cout<<"\nEnter the number of objects :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"\nEnter the weight of object :";
        cin>>w[i];
        cout<<"\nEnter the profit :";
        cin>>p[i];
        pw_ratio[i]=p[i]/w[i];
        cout<<"\npw_ratio="<<pw_ratio[i];
    }
//Sorting in descending order of p/w ratio
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(pw_ratio[i]<pw_ratio[j])
            {
                temp=pw_ratio[i];
                pw_ratio[i]=pw_ratio[j];
                pw_ratio[j]=temp;
                t=w[i];
                w[i]=w[j];
                w[j]=t;
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<"\n\t\t"<<w[i]<<"\t\t"<<p[i]<<"\t\t "<<pw_ratio[i]<<"\n";
}
void knapsack::calc()
{
    int u=m,i;
    for(i=1;i<=n;i++)//init the x array
        x[i]=0;
    for(i=1;i<=n;i++) {
        if(w[i]>u) break;  //if weight greater than max capacity then stop
        x[i]=1.0;
        u=u-w[i];// reduce the capacity
    }
    if(i<=n)        // if i<= capacity then 
        x[i]=u*1.0/w[i];    //capacity*1/weight[i]
    for(i=1;i<=n;i++)
        cout<<"x["<<i<<"]="<<x[i]<<"\n";
}
void knapsack::display()
{
    float profit=0.0;
    for(int i=1;i<=n;i++)
    {
        profit+=p[i]*x[i];
        cout<<"op"<<profit;
    }
    cout<<"\n Maximum profit= "<<profit;
}
int main()
{
    knapsack k;
    k.get();
    k.calc();
    k.display();
}