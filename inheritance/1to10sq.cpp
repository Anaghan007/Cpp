#include<iostream>
using namespace std;
class maths
{
    protected:
    int n;
    public:
    int i;
};

class derived : public maths
{
    public:
    void cal()
    {
        cout<<"Enter Number: ";
        cin>>i;
        n=i*i;
        cout<<"Square Of Number is: "<<n<<endl; 
    }
};

int main()
{
    derived d;
    d.cal();
}