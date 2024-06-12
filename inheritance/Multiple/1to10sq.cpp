#include<iostream>
using namespace std;
class base1
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter A: ";
        cin>>a;   
    }
};
class base2
{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"Enter B: ";
        cin>>b; 
    }
};

class derived : public base1,public base2
{
    public:
    void product()
    {
        cout<<"Square of A is: "<<a*a<<endl;
        cout<<"Sqaure of B is: "<<b*b<<endl;
    }
};

int main()
{
    derived d;
    d.setA();
    d.setB();
    d.product();
}