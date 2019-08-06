#include<iostream>
using namespace std;
int main(){
    int a, num, digit,sum=0;
    cin>>num;
    a=num;
    while(num>0){
        digit = num%10;
        num = num/10;
        sum = sum+(digit*digit*digit);
    }

    if(a==sum){
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
}
