#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int i,k,flag=0;
    char str[20];
    cout<<"Enter a string to check whether it contains vowels in it"<<endl;
    cin>>str;
    k = strlen(str);
    for(i=0;i<k;i++){
        switch(str[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            flag = 1;
        }
    }
    if(flag){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}