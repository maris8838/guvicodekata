#include <iostream>
using namespace std;

int main() {
	char x ;
	cin>>x;
	
	if( ( x >= 65 && x <= 90 ) || ( x >= 97 && x <= 122 ))
	{
		cout<<"Alphabet"<<endl;
	}
	
	else
	{
		cout<<"No"<<endl;
	}
	return 0;
}
