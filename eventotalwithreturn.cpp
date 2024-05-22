#include<iostream>
using namespace std;
int sum()
{
    int sum;
    for(int i=0;i<=10;i+=2)
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
0       2       4       6       8       10
Total is : 30
*/