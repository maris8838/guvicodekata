#include<iostream>
using namespace std;
int main(){
    int base = 1,num;
    cin>>num;
    while(base <= num ){
        base = base * 2;
    }
    
    cout << base;
    
    return 0;
}