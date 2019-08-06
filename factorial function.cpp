#include <iostream>
using namespace std;
long factorial(int fact);
int main(){
    int num,fact;
    cin>>num;
    fact=factorial(num);
    
    cout<<fact;
    
}
long factorial(int fact){
    int f=1;
    for( int i=1; i<=fact; i++)
        f =f*i;
        return f;
    
}