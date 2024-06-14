#include<iostream>
using namespace std;
class base
{
    public:
    virtual void hello()
    {   
        cout<<"Base Class While Function"<<endl;
    }
};

class derived : public base
{
    public:
    void hello()
    {
        cout<<"Derived Class While Function"<<endl;
    }
};

int main()
{
    derived d;
    base *p,b;
    p=&b;
    p->hello();
    p=&d;
    p->hello();
}