#include <iostream>
using namespace std;
int main()
{
    int p, e, b, i;
    cin>>b>>e;
    p=1;
for(i=1; i<=e; i++){
    p=p*b;
}
   cout<<p;
    return 0;
}