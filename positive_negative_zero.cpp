#include <iostream>
using namespace std;
int main() 
{
    int number =5;
    
    if ( number > 0)
    {
        cout << "positive" << number << endl;
    }
    else if (number < 0)
    {
        cout<<"negative" << number << endl;
    }
    else
    {
        cout << "zero" << endl;
    }
   
    return 0;
}
