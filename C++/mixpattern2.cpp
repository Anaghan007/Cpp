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
		 if(i<=3)
		 {
		    cout<<k;
            k++;
            cout<<"\t"; 
		 }
		 else
		 {
		    cout<<n;
            n++;
            cout<<"\t"; 
		     
		 }
	    }
	    cout<<endl;
	}
	return 0; 
}
/*
A       B       C       D       E
F       G       H       I       J
K       L       M       N       O
1       2       3       4       5
6       7       8       9       10
*/