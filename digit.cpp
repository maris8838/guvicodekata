#include <iostream>
using namespace std;
int main()
{
int num,count=0;
cin>>num;
while(num!=0)
{
 num=num/10;
 count++;
}
cout<<count;
return 0;
}