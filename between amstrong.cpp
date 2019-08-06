#include <iostream>
using namespace std;
int main(){
    int i, num1, num2, digit;
    int notFirst = 0;
    cin>> num1;
    cin>>num2;
    
    for(i=num1 + 1; i<num2; i++){
        int temp = i, sum = 0;
        while(temp > 0){
            digit = temp % 10;
            temp = temp/10;
            sum = sum+(digit*digit*digit);
        }
        if (i == sum)
        {
            if(notFirst == 1)
                cout << " ";
            cout <<sum;
            notFirst = 1;
        }
    }
    return 0;
}