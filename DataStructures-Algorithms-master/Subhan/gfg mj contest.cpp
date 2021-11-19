// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
typedef pair<int, int>	pii;
#define fo(i,n) for(i=0;i<n;i++)
class Solution {
public:
	int TotalPairs(vector<int>&nums, int x, int y){
	    // Code here
	//    stack<int> st;
    //    st.push_back
    int count = 0;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i;j<nums.size();j++)
        {
            int ans = nums[i]*nums[j];
            if( ans >= x && ans <= y)
            {
                count ++;
            }
        }
    }
    return count;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, x, y;
		cin >> n >> x >> y;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.TotalPairs(nums, x, y);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends