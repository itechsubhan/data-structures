#include <bits/stdc++.h>
using namespace std;
// we take two parameters low and high
void merge(int a[] , int lowerbound,int mid,int upperbound)
{
	int i = lowerbound;
	int j = mid+1;
	int k = lowerbound;
	int b[upperbound+1];

	// the condition to check is travelling the two arrays and till we reach the end of two arrays
	// two divided arrays travelling i and j pointers
	// till i< mid i.e end of array 1 similarly array 2

	while(i<= mid && j<= upperbound)
	{
	// we are comparing two elements of the arrays and sorting it to make a new array that will be sorted
		if (a[i]<=a[j])
		{
			b[k] = a[i];
			i++;
			k++;	
		}else {
			b[k]=a[j];
			j++;
			k++;	
		}
		
	}
	// remaining elements to be put in the list
	if (i>mid)
	{
		while(j<=upperbound)
		/* code */
		{
			b[k] = a[j];
			j++;
			k++;
		}
	}else{
		while(i<=mid)
		{
			b[k] = a[i] ;
			i++;
			k++;

		}
	}
	// as we have taken array B for temporary purpose now we have to return the sorted array 
	// therefore we now make the orgnal array a as sorted
	// simply cpy the b array in a 
	for (int k= lowerbound; k<=upperbound; k++)
	{
		a[k] = b[k];
	}
}
void mergesort(int a[],int lowerbound,int upperbound )
{
	// here a condition to check if the elements in array are already divided
	// and the array is not only single element
	if (lowerbound<upperbound)
	{
	// merge sort steps we need to divide the array for merging
	
	int mid = (lowerbound + upperbound)/2;
	
	// now recursively call the function for dividing and making the element single then
	
	mergesort( a,lowerbound,mid);
	
	// when lowerbound and mid becomes same it will stop
	
	mergesort( a,mid+1,upperbound);
	
	// calling merge as the elements are divided
	
	merge(a,lowerbound,mid,upperbound);
	
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	// take an array and sizw n
	int n = 7;
	int a[n] = {5,81,0 ,4,3,2,1};
	mergesort(a,0,n);
	for(int i = 0;i<n;i++)
		cout<<a[i]<<" ";

} 