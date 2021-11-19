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
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
typedef vector<int>		vi;
typedef pair<int, int>	pii;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
// Global variables
// stack of pairs
stack<pii> st;
// we are travelling <---<<<<---------
vi NextSmallerRight(vi arr)
{
	vector<int>  right;
	int n=arr.size();
	int NotfoundaSmaller = n;

	for(int i = n-1 ;i >= 0 ; i--)
	{
		if(st.size() == 0)
		{
			right.push_back(NotfoundaSmaller);
		} //another dondition you are not checking is the size but the video is checking
		else if (st.top().first < arr[i] && st.size()>0)
		{
			right.push_back(st.top().second);
		}
		else if (st.top().first >= arr[i]	&& st.size()>0 )
		{
			while(st.size() > 0 && st.top().first >= arr[i] )
			{
				st.pop();
			}
			if (st.size() == 0)
			{
				right.push_back(NotfoundaSmaller);
			}
			else{
				right.push_back(st.top().second);
			}
		} 
		st.push({arr[i],i});
	}

	n=right.size();
	reverse(all(right));
	return right;
}
// empty the stack
void empty_Stack()
{
	// as stack is global
	while(st.size() != 0 )
	{
	st.pop();
	}
}

// we are travelling --->
vi NextSmallerleft(vi arr)
{
	vector<int>  left;
	int n=arr.size();
	int NotfoundaSmaller = -1;

	for(int i = 0 ;i <= n ; i++)
	{
		if(st.size() == 0)
		{
			left.push_back(NotfoundaSmaller);
		} //another dondition you are not checking is the size but the video is checking
		else if (st.top().first < arr[i] && st.size()>0)
		{
			left.push_back(st.top().second);
		}
		else if (st.top().first >= arr[i]	&& st.size()>0 )
		{
			while(st.size() > 0 && st.top().first >= arr[i] )
			{
				st.pop();
			}
			if (st.size() == 0)
			{
				left.push_back(NotfoundaSmaller);
			}
			else{
				left.push_back(st.top().second);
			}
		} 
		st.push({arr[i],i});
	}

	n=left.size();
	// no need of reverse the vector
	// reverse(all(right));
	return left;
}
void solve()
{
	int n,t=1,i,j,k;
	// n=5;
	// int a[] = {1,3,2,4}; output [3,4,4,-1]
	vi a = { 6,2,5,4,5,1,6 };
	n= a.size();
	cout<< "given array is" <<endl;
	fo(i,n) cout<< a[i]<<" ";
	cout<<endl;
	vi right = NextSmallerRight(a);
	empty_Stack();
	vi left = NextSmallerleft(a);
	fo(i,n) cout<< right[i]<<" ";
	cout<<endl;
	fo(i,n) cout<< left[i]<<" ";
	cout<<endl;
	// the main logic of histogram is to make an array which can store the value of
	// NSright - NSleft -1 ;====width of the elements that can expand upto that extent
	vi width;
	fo(i,n) {
		width.pb(right[i] - left[i] -1);
	}
	cout<<"width that array elements can expand till"<<endl;
	fo(i,n) cout<< width[i]<<" ";
	cout<<endl;

	// now multiply the width * element of the given array to get area;

	fo(i,n) width[i] = width[i] * a[i];
	cout<<"areas vector"<<endl;
	fo(i,n) cout<< width[i]<<" ";
	cout<<endl;
	int max = 0;

	fo(i,n){
		if(width[i] > max)
			max = width[i];
	}
	cout<< max;


}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	solve();
}