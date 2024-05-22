#include<iostream>
using namespace std;
int sum()
{
    int sum;
    for(int i=1;i<=10;i+=2)
    {
        cout<<"\t"<<i;
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int total;
    total=sum();
    cout<<"\t"<<endl<<"Total is : "<<total;
}
/*
1       3       5       7       9
Total is : 25
*/