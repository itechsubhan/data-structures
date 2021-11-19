nqueen:
#include <iostream>
using namespace std;
int arr[10][10],z=0;
bool safe(int x,int y,int n)
{
   for(int row=0;row<x;row++)
   {
       if(arr[row][y]==1)
       {
           return false;
       }
   }
   int row=x,col=y;
   while(row>=0&&col>=0)
   {
       if(arr[row][col]==1)
       {
           return false;
       }
       row--;
       col--;
   }
   row=x,col=y;
   while(row>=0&&col<n)
   {
       if(arr[row][col]==1)
       {
           return false;
       }
       row--;
       col++;
   }
   return true;
}
bool queen(int x,int n)
{
   if(x==n)
   {
 z++; // for counting number of possible solution
 for(int i=0;i<n;i++)
 {
   for(int j=0;j<n;j++)
   {
       if(arr[i][j]==1)
       {
           cout<<"Q ";
           
       }
       else
       {
           cout<<"X ";
       }
   }
   cout<<endl;
}
cout<<endl<<endl;
return false;
}
for(int col=0;col<n;col++)
{
   if(safe(x,col,n))
   {
       arr[x][col]=1;
       if(queen(x+1,n))
       {
           return true;
       }
       arr[x][col]=0;
   }
}
return false;
}
int main()
{
   int n;
   cout<<"enter the size"<<endl;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           arr[i][j]=0;
       }
   }
   queen(0,n);
   cout<<"possible solution is: "<<z;
   return 0;
}