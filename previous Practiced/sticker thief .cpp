
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,t=1,i,j,k;
	  dp[0] = arr[0];
        dp[1] = max(arr[0], arr[1]);
    int temp;
    // Iterate from i = 2 to n.
        for(int i = 2; i < n; i++) {
        
        // maximum value till ith house will be 
        // maximum of (i-1)th house without including current house
        // and inculuding ith house + maxVlue till (i-2)th house.
            dp[i] = max(dp[i-1], dp[i-2] + arr[i]);
    }
    
    // return last value which will be the final Answer
    return dp[n-1];
}


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	solve();

}
  