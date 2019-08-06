#include<iostream>
using namespace std;
int main(){
    int i, n, a, d, sum=0;
    cin>>n>>a>>d;
    for(i=1; i<=n; i++)
    {
        sum+=i;
    }
    
    cout<<sum;
    return 0;
}