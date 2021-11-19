// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        int sum = 0;
        cout<<  accumulate(arr,arr+n,sum);
       int avg = sum/n;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>avg)
            arr[i] = arr[i] - k;
            else if (arr[i]<= avg )
            arr[i]= arr[i]+k;
        }
        int max = *max_element(arr,arr+n);
        int min = *min_element(arr,arr + n);
        sum = max - min;
        cout <<sum;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends