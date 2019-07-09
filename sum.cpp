  #include<iostream>
#include<conio.h>
using namespace std;
int main()
{ 
int n, i, sum = 0;
cout<<"enter the number : "<<endl;
cin>>n;
for(i=0; i<=n; i++)
{
    sum=sum+i;
}
   cout<<sum;
   return 0;
}
