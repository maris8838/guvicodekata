#include <iostream>
using namespace std;
int main()
{ 
    int a;
    cin>>a;
    if(a>0){
    if(a%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    }
    else
    {
        cout<<"Invalid";
    }
    return 0;
}
