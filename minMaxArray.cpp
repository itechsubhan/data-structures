#include <bits/stdc++.h>
using namespace std;
int main()
{
    int f,a[] = {15,16,20,75,1,17,30,0};
    int n = sizeof(a) / sizeof(a[0]);
    cin>>f;
    int min;
    int max;
    max = *max_element(a, a+n);
  min =  *min_element(a, a+n);
    cout << "max is "<<max<<"\n min is"<< min << endl;
    
}