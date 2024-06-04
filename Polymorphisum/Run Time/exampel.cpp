#include<iostream>
using namespace std;
class test
{
    public:
    int hello()
    {
        cout<<"Basic Function Called...."<<endl;
    }
    int hello(int a)
    {
        cout<<"Value of a is: "<<a<<endl;
    }
    int hello(int a, int b)
    {
        cout<<"Multiplication of a and b is: "<<a*b<<endl;
    }
    int hello(int a, int b, int c)
    {
        cout<<"Addition of a and b and c is: "<<a+b+c<<endl;
    }
};

int main()
{
    test t;
    t.hello();
    t.hello(10);
    t.hello(10,20);
    t.hello(10,20,30);
}