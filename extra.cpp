#include <bits/stdc++.h>
using namespace std;
class sieveOfErastosthnes
{
private:
 /* data */
public:
  void primsReturn(int n)
  {
      int a[100] = {0};
      for(int i = 0;i<n; i++)
      {
          for(int j=2; j<sqrt(i) ; j+i)
          {
              if(a[i] = 0)
              a[i] = 1;
          }
      }
  }
};
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w", stdout);
  #endif 
    // sieveOfErastosthnes s;
    // s->primsReturn(100);
    // s.primsReturn(100);
  cout<<"5";

}