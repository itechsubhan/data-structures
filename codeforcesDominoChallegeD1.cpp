#include <iostream>
using namespace std;
void solve(int N,int M,int K)
{
	if (N%2 == 0 && M%2 == 0)
	{
		if (K%2 == 0)
			cout<< "YES";
		else cout<< "NO";
	}
	if (M%2 == 0 && N%2 != 0 )
	{
		if (K < M/2)
		cout<<"NO";
		else
		{
			K = K - M/2;
			if (K%2 == 0 )
			cout<< "YES";
		else cout<< "NO";
		}	

		
	}
	if(N%2 == 0 && M%2 != 0 )
	{
		if(K<= N*M/2 - N/2 && K%2 == 0)
		 cout<< "YES";
		else cout<< "NO";
	}
	return ;
	
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outputs.txt","w", stdout);
	#endif

	int N,M,K,T;
	cin>>T;
	while(T--)
	{
		cin>> N >> M >> K;
		solve(N,M,K);
		cout<<endl;
	}
}
