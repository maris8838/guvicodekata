#include <iostream>
using namespace std;
int main()
{
  int i, a[10], max;
  
  for(i=0;i<10;i++)
  {
    cin>>a[i];
  }
  max=a[0];
  for(i=0;i<10;i++)
  {
      if(max<a[i])
      {
          max=a[i];
      }
  }
 cout<<max;
}
