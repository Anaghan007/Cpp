#include<iostream>
using namespace std;
class Hello
{
    public:
    Hello()
    {
        cout<<"Default"<<endl;
    }
    Hello(int a)
    {
        cout<<"Value of B is: "<<a<<endl;
    }    
    Hello(char b)
    {
        cout<<"Charector is :"<<b<<endl;
    }
};

int main ()
{
  Hello h,b(10),c('A');
}