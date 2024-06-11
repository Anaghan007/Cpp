#include<iostream>
using namespace std;
class base
{
    int a;
    protected:
    int b;
    public:
    int c;
};

class derived : public base
{
    public:
    void hello()
    {
        base :: b =15;
        base :: c =150;
        cout<<"Value of B is: "<<b<<endl;
        cout<<"Value of C is: "<<c<<endl;             
    }
};

int main()
{
    derived d;
    d.hello();
}