#include <bits/stdc++.h>
using namespace std;

void  primes(int n)
{
	int a[100] = {0};
	for(int i=2;i<=n;i++)
	{
		if (a[i] ==0)
		{
			for (int j=i*i;j<=n;j+=i)
			{
				a[j] = 1;
			}
		}
	
	} 
	for (int i = 2; i <= n; i++)
	{
		/* code */
		if (a[i] == 0)
		{
			cout<<i<<" ";
		}
	}

}

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt","w", stdout);
	// #endif
	int n = 30 ;
	primes(n);
	return 0;

}
/*0 --> true
 1-->false
*/
