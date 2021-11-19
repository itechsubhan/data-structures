#include <iostream>
using namespace std;
void cool()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	return ;
}
int main()
{
	cool( );
	int n;
	cin>>n;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			/* code */
			if(j<i)
			cout<<i;
			else
			cout<<"0";
		}
		for (int j = n - 1; j >= 0; j--)
		{
			/* code */
			if(j<i)
			cout<<i;
			else
			cout<<" ";
		}
		cout<< endl;
		
	}
	
}