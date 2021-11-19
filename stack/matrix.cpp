#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	vector<vector<int> > a,i,j;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int n;
			cin>> n;
			a[i][j] = n;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout<< a[i][j]<< " ";
		}
		cout<<endl;
	}
	
}