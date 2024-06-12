#include<iostream>
using namespace std;
void sum()
{
    int a;
    cout << "Enter a: ";
    cin >> a;
    for(int i=1;i<=a;i++)
    {
        cout <<"\t"<<i;
    }
    
}
int main()
{
    sum();
    return 0;
}
/*
Enter a: 10
1       2       3       4       5       6       7       8       9       10
*/