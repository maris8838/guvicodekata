#include<iostream>
using namespace std;
int main()    
{    
 int a[100],i,j,n;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
  
  for(i=0;i<n-1;i++)
 {
    for(j = i+1; j<n; j++)
    {
        if(a[i] > a[j])
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
 }
 
 int k= n/2;
   cout<<" "<<a[k];
 
  return 0;  
 } 