#include<iostream>
using namespace std;
int main(){
    int i,start, end;
    cin>> start;
    cin>> end;
    start = start+1;
    for(i = start; i<end; i++){
        if(i % 2 ==0){
           cout<<" "<<i;
        }
    }
}