#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char c = 'z';
	if (c == 'a' , c == 'e' , c == 'i' , c == 'o',  c == 'u'){
		cout<<c<< "is a vowel"<<endl;
		}
		else if (c == 'b' , c == 'c' , c =='d' , c == 'f', c == 'g' , c == 'h' , c== 'j' , c == 'k' , c =='l' ,c == 'm' , c == 'n' , c == 'p' , c == 'q' , c == 'r' , c == 's' , c == 't' ,c == 'u' , c == 'v' , c == 'w' , c == 'x' ,c == 'y', c == 'z')
		{
			cout<<c<< "is a consonant"<<endl;
		}
		else 
		{
			cout<<c<<"invalid";
		}
	return 0;
}
