#include <iostream>
using namespace std;
int main()
{
   int a, num, digit, reverse = 0;
   cin>>num;
   a =  num;
   do{
      digit = num % 10;
      reverse = (reverse * 10) + digit;
      num = num / 10;
   }while(num != 0);
    if(a == reverse)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}