#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
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
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

// creating a stack to store the elements
stack<pair<int,int> > st;
vector<int> NextSmallerRight(vi arr)
{
  int i;
  int n= arr.size();
  pii pa;
  vector<int> ans;
  int NotfoundaSmaller = n;
  for(i=n-1;i>=0;i--) {
    if(st.size() == 0)
    {
      ans.push_back(NotfoundaSmaller);
    }
    // stack top less than the element good
    else if(st.size() > 0 && st.top().first < arr[i])
    {
      ans.push_back(st.top().second);
    }
    else if(st.size() > 0 && st.top().first>arr[i])
    {
      // while(st.size() > 0 && st.top() >= a[i] )
      while(st.size()>0 && st.top().first >= arr[i])
      {
        st.pop();
      }
      if(st.size() == 0 )
        ans.push_back(NotfoundaSmaller);
      else
        ans.push_back(st.top().second);
    }
    // pa.first = arr[i];
    // pa.second =i;
    st.push({arr[i] , i});
  }
  n=ans.size();
  reverse(all(ans));
  fo(i,n) cout<< ans[i]<<" ";
  return ans;
}

void solve() {
  int i, j, n, m;
  vi arr = {6,2,5,4,5,1,6};
  vi rightv =  NextSmallerRight(arr);
  // vi leftv =  NextSmallerLeft(arr,n);
//   n = arr.size();
// for(i=0;i<n;i++) 
//   cout<<rightv[i]<<" ";
  // find nearest geater to right
}

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt","w", stdout);
  #endif
  solve();

    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}

