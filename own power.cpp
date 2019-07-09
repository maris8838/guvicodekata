#include <iostream>

using namespace std;

int main()
{
    int base,power,i,result=1;
    cin>>base>>power;
    for(i=1;i<=power;i++)
    {
        result=result*base;
    }
    cout<<result;
    return 0;
}