#include<iostream>
using namespace std;
int sum()
{
    int sum;
    for(int i=1;i<=10;i++)
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
1       2       3       4       5       6       7       8       9       10
Total is : 55
*/