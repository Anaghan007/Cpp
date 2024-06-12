#include<iostream>
using namespace std;
int main() 
{
    char n=65;
    for (int i = 65; i<=69; i++)
    {
        for (int j = 65; j<=69; j++)
        {
            cout <<n++; 
            cout<<"\t";   
        }
        cout<<endl;
    }
    return 0;
}
/*
A       B       C       D       E
F       G       H       I       J
K       L       M       N       O
P       Q       R       S       T
U       V       W       X       Y
*/