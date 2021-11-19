#include <bits/stdc++.h>
// #include<array>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	 array< int , 6 > arr  =  { 5,6,7,8,9,1};
	 for(int k = 0;k<arr.size();k++)
	 {
	 	for (int i = k; i < arr.size(); ++i)
		{
			for (int j = k; j < i; ++j)
			{
				cout<<arr[j]<<" " ;
			}
			cout<<endl;
		}

	 }
	
	
 
}