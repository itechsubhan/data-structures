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
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
void solve()
{	
//  [a,b,c,d ,d,r,df,,g,,fd,ddfd,df.df,]
// next greater to left 
// <----------------
// <---------------------------
	int n,t=1,i,j,k;
	n=6;
	int a[n] = {5,4,1,3,7,1};
	vi ans;
	stack<int> st;
	// here we are travelling -->
	fo(i,n)
	{
		if (st.size() == 0	)
		{
			ans.push_back(-1);
		}
		else if (a[i] < st.top())
		{
			ans.push_back(st.top());
		}
		else if(a[i] > st.top() )
		{
			while(st.size() > 0 && a[i] > st.top())
			{
				st.pop();
			}
			if(st.size() == 0)
			{
				ans.push_back(-1);
			}else
			{
				ans.push_back(st.top());
			}
		}

		st.push(a[i]);
	}
	fo(i,n) cout<<ans[i]<<" ";


}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	solve();
}