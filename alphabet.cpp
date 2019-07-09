#include <iostream>
using namespace std;

int main() {
	char x = '++';
	if( ( x >= 65 && x <= 90 ) || ( x >= 97 && x <= 122 ))
	{
		cout<<x<<" alphabet"<<endl;
	}
	else
	{
		cout<<x<<"no "<<endl;
	}
	return 0;
}