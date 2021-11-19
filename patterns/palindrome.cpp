#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	int i,j,r;
	cin>>r;
	for(i=1;i<=r;i++)
	{
		int k=i;
		for(j=1;j<=(r-1);j++)
		{
			cout<<" ";
		}
		for( ;j<=r;j++)
		{
			cout<< k<<" ";
			k--;
		}
		k=1;
		for( ;j<(r+i);j++)
		{
			k++;	
			cout<<k<<" ";
		}
		for( ; j<=(2*r-1);j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
 
}