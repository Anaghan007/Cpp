#include<iostream>
using namespace std;
class base
{
    public:
    virtual void hello() = 0;
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
    base *p;
    p=&d;
    p->hello();
}