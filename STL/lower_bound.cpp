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
	n=5;
	int val = 4;
	// int a[n] = {5,4,1,3,8,1};
	// vi arr = {5,4,1,0,8,1};
	vi arr = {-1,-1,2,3,5};

// this will sort the input array
	sort(all(arr));
	// iterator will catch the lower bound (it)\
	// returns the pointer to the location found
	 
	 auto it = lower_bound(arr.begin(),arr.end(), 4);

	cout<< *it <<endl;
	// as you can see the the lower bound

	// if you need the index of the location 
	// we can find that by subtracting the array begining value
	auto it1 = lower_bound(arr.begin(),arr.end(), 4) - arr.begin() ;
	cout<<it1<< endl;
	// since array is now [0,1,1,4,5,8] index = 3
	//but we need the value or the previous index if the number is not found
	if((*it) != val)
		{
			it1--;
			cout<<it1<<endl;
		}
	// if we wnt the value we can store the index and print the array[i]
	cout<<arr[it1]<<endl; 


	
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	solve();
}