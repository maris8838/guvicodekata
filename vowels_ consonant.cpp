#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char c;
	cin>>c;
	if((c>=65 && c<=90) || (c>=97 && c<=122)){
	    if(c==65 || c==69 || c==73 || c==79 || c==85 || c==97 || c==101 || c==105 || c==111 || c==117)
	    {
	        cout<<"Vowel";
	    }
	    else
	    {
	        cout<<"Consonant";
	    }
	}
	else
	{
	    cout<<"invalid";
	}
	  return 0;  
	}
