//METHOD 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("outputs.txt","w", stdout);
	#endif
	int T;
	cin>>T;
	while(T--)
	{
	    int N,D;
	    cin>>N;
	    cin>>D;	    
	    int arr[N];
	    for(int i=0;i<N ; i++)
	    {
	        cin>>arr[i];
	    }
	    int i,temp[N];
	    for(i=0;i<D;i++)
	    {
	    	temp[i] = arr[i];
	    }
	    int b =D;
	    //temp stored the first part of array
	    int temp2[N];
	    // temp2 stores the forstr part of array
	    for (int i = 0; i < N-D; i++)
	    {
	    	// shifting the array
	    	temp2[i]= arr[b];
	    	b++;
	    }
	    b=0;
	    // movig the firsrt part of array art end
	    for (int i = N-D; i < N ; ++i)
	    {
	    	/* code */
	    	arr[i] = temp2[b];
	    	b++;
	    }
	    for(int i = 0; i<N ; i++)
	    {
	    	cout<<arr[i] << " ";
	    }
	    cout<<endl;
	    
	}
	return 0;
	
}this does not work