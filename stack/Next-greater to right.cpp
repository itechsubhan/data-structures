#include <bits/stdc++.h>
using namespace std;
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
typedef vector<int>		vi;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
void solve()
{
	int n,t=1,i,j,k;
	// n=5;
	// int a[] = {1,3,2,4}; output [3,4,4,-1]
	int a[] = { 6,2,5,4,5,1,6 };
	stack<int> st;
	vector<int>  result;
	for(int i =6 ;i >= 0 ; i--)
	{
		if(st.size() == 0)
		{
			result.push_back(-1);
		} //another dondition you are not checking is the size but the video is checking
		else if (st.top() > a[i] && st.size()>0)
		{
			result.push_back(st.top());
		}
		else if (st.top() <= a[i]	&& st.size()>0 )
		{
			while(st.size() > 0 && st.top() <= a[i] )
			{
				st.pop();
			}
			if (st.size() == 0)
			{
				result.push_back(-1);
			}
			else{
				result.push_back(st.top());
			}
		} 
		st.push(a[i]);
	}
	// reverse(all(result));
	n=result.size();
	// for( i=0; i<n ; i++)
	// {
	// 	cout<< result[i];
	// }
	reverse(all(result));
	fo(i,n) cout<< result[i]<<" ";
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	solve();
}
  