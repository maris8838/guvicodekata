#include<iostream>
using namespace std;
int main(){
    int  num,rem,diff,sum=0;
    cin>>num;
    rem = num%10;
    diff = 10 - rem;
    sum = num + diff;
    cout<<sum;
}