#include <iostream>
using namespace std; 
int main() 
{ 
    char a=65;
	for (char i = 65; i <=69; i++) 
	{ 
	    for (char j = 65; j <=i; j++) 
	    { 
			cout <<a;
            a++; 
		} 
		cout << endl; 
	} 
	return 0; 
}
/*
A
BC
DEF
GHIJ
KLMNO
*/