#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[50],str2[50];
    int len1,len2;
    cin>>str1>>str2;
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1 > len2)
        cout<<str1;
        else
        cout<<str2;
}