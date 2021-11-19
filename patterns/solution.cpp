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
	int n, x,  y, k;
	cout << "Enter the number of rows to show number pattern: "<<endl;
	cin >> n;
	for(x = 1; x <= n; x++)
	{
		for(y = 1; y <= n; y++)	 	
		{
			if(y <= x)
				cout << y;
			else
				cout << "*";
		}
		for(y = n; y >= 1; y--)
		{
			if(y <= x)
				cout << y;
			else
				cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
