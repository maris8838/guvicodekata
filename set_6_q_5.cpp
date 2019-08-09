#include <iostream>

using namespace std;

int main()
{
  int num1, num2;
  
  cin >> num1 >> num2;
  
  ( (num1 * num2) % 2 == 0) ? cout << "even" : cout << "odd" ;
  
  return 0;
}