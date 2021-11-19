// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> setA ;
        for (int i = 0; i < n; ++i)
        {
        	setA.insert(a[i]);
        }
        for (int i = 0; i < m; ++i)
        {
        	setA.insert(b[i]);
        }
        
        return setA.size();
        
    }
};

// { Driver Code Starts.

int main() {
	
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt","w", stdout);
	// #endif

	int t;
	cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;   
	}	
	return 0;
} 