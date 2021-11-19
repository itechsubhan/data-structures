#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	int size = 9, counnt = 0;
	// int star[size],hash[size];
	int i = 0,j;
	bool flag;
	for (i = 0; i < size; i++)
	{
		j=0;
		do{
		cout<<"*";
		j++;
		}while(j<16);
		cout<<endl;
	}

}
// for(int j= size*2  - 2 ; j >= 0 ;j=j-2 )
	// {
		// cout<<"*";
	// }