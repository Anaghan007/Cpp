#include<iostream>
using namespace std;
class Add
{
    public:
    Add()
    {
        cout<<"Default"<<endl;
    }
    Add(int a)
    {
        cout<<"Value of A is: "<<a<<endl;
    }    
    Add(int a,int b)
    {
        cout<<"Total is :"<<a+b<<endl;
    }
};

int main ()
{
  Add h,b(10),a(10,20);
}