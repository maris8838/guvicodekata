/*51 - Given a number N, print all its digits(in same order).
Sample Testcase :
INPUT
123
OUTPUT
1 2 3 - (Posted by Nivedha)   variables operators conditional Math pointers  Total Submissions : 1660

My-Submission : Not Submitted*/
#include<iostream>
using namespace std;
int main(){
    int n,sum = 0,rem;
    cin>>n;
    while(n > 0){
        rem = n % 10;
        sum = sum*10 + rem;
        n = n / 10;
    }
     while(sum > 0){
         rem = sum % 10;
         cout<<" "<<rem;
         sum = sum / 10;
     }
    return 0;
}