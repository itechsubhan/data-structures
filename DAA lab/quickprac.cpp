#include <iostream>
using namespace std;
void swapdata(int  *x, int *y)
{
   int  temp;
   temp = *x;
   *x = *y;
   *y = temp;
}

void Display(int A[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

int paritition(int A[],int low,int high)
{
	int pivot = A[low];
	int i = low ,j = high;
	do
	{
		do{i++;}while(A[i]<=pivot);
		do{j--;}while(A[i]>pivot);
		if (i<j)
		{
			swapdata(&A[i],&A[j]);
		}
	}while(i<j);

	swapdata(&A[low],&A[j]);
	return j;
}
int Partition(int A[], int low, int high)
{
   int pivot = A[low];
   int i = low, j = high;
   do
   {
       do{i++; } while(A[i] <= pivot);
       do{j--; } while(A[j] > pivot);
       if(i<j)
           swapdata(&A[i], &A[j]);
   }
   while(i < j);
   swapdata(&A[low], &A[j]);
   return j;
}
void QuickSort(int A[],int low ,int high)
{
	int j;
	if (low<high)
	{
		j= Partition(A,low , high);
		QuickSort(A,low,j);
		QuickSort(A,j+1,high);
	}

}
int main()
{
	int A[] = {11,13,7,12,16,9,24,5,10,3};
    cout<<"\nBefore Sorting...\n";
    Display(A, 10);
    QuickSort(A, 0, 10);
    cout<<"\nAfter Sorting....\n";
    Display(A, 10);
    return 0;
}