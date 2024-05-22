#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int i=0,j=0;
    cout<<"Enter String: ";
    char name[50];
    cin >> name;

    cout<<"Enter String: ";
    char name1[50];
    cin >> name1;

    for(j=0; name[j]!='\0';j++);
    
    for(i=0; name1[i]!='\0';i++,j++)
    {
        name[j]=name1[i];
    }
    cout <<name;
    return 0;
}

/*
Enter String: Smit
Enter String: Patel
SmitPatel
*/