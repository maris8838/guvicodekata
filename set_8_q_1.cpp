#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100];
    int i,n,length,flag=0;
    cout<<"Enter a string"<<endl;
    cin>>str1;
    length=strlen(str1);
    for(i=0;i<length;i++){
        if(str1[i]!=str1[length-i-1]){
            flag=1;
            break;
        }
    }
    if(flag=1){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}