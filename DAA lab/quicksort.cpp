//Quick Sort
#include <iostream>
using namespace std;
void Display(int A[], int n)
{
   for(int i=0;i<n;i++)
       cout<<A[i]<<" ";
}
void swapdata(int  *x, int *y)
{
   int  temp;
   temp = *x;
   *x = *y;
   *y = temp;
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
void QuickSort(int A[],int low, int high)
{
   if(low < high)
   {
       int j=Partition(A, low, high);
       QuickSort(A, low, j);
       QuickSort(A, j+1, high);
   }
}
int main()
{
    // int A[] = {32, -15, 115, 12, 300, -6, 8, 190, 77};
    int A[] = {11,13,7,12,16,9,24,5,10,3};
    cout<<"\nBefore Sorting...\n";
    Display(A, 10);
    QuickSort(A, 0, 10);
    cout<<"\nAfter Sorting....\n";
    Display(A, 10);
    return 0;
}
