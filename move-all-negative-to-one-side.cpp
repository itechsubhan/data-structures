#include<bits/stdc++.h>
using namespace std;
int ret(int arr[], int n)
{
    int j=0;
    for (int i = 0; i <= n ; i++)
    {
        if (arr[i]<0)
        {
            if(i != j )
            swap(arr[i],arr[j]);    //o(n)
        j++;    
        }
    }   
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int n = 9;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ret(a,n);
    printArray(a, n);
}