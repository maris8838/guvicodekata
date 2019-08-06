#include <iostream>
using namespace std;

int main()
{
    char a[100];
    int count=0;
    cin>>a;
    for(int i=0; a[i] != 0;i++)
    {
        if(a[i] != ' ')
            count++;
        
    }
    cout<<count;
    return 0;
}