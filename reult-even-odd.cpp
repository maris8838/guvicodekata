#include<iostream>
using namespace std;
int main(){
    int N,M,diff;
    cin>>N>>M;
    diff = N - M; 
    if(diff %2 == 0){
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    return 0;
}