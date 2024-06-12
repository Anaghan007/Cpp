#include <iostream>
using namespace std; 
int main() 
{ 
	int n=1;
	char k='A';
	for (int i = 1; i <=5; i++) 
	{ 
	    for (int j = 1; j <=5; j++) 
	    { 
		 if(i%2!=0)
		 {
		    cout<<k;
            cout<<"\t"; 
		 }
		 else
		 {
		    cout<<n;
            cout<<"\t"; 
		     
		 }
		 n++;
		 k++;
	    }
	    cout<<endl;
	}
	return 0; 
}
/*
A       B       C       D       E
6       7       8       9       10
K       L       M       N       O
16      17      18      19      20
U       V       W       X       Y
*/