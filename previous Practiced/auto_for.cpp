#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,5,16,18,20,0,3};
// range based loo[p] 
    for (int &x : a)
    {
       x++;
        cout<<x<<"  ";
    }
    cout<< endl;
    // we can use various types of data but with auto it actually determines the data type
    for(auto x: a)
    {
        cout<<x<<"   ";
    }
}
*max_element(arr, arr+n);
*min_element(arr ,  arr + n);   