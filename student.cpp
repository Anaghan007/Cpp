#include<iostream>
using namespace std;

class students 
{
    private:
    int a;
    public:
    int b; 
    void setdata(int a1);
    void printdata()
    {
        cout << a << endl;
        cout << b << endl;
    }
};

void students::setdata(int a1)
{
    a = a1;
}

int main()
{
    class students s1,s2;
    s1.b = 10;
    s1.setdata(20);
    s1.printdata();

    s2.b = 50;
    s2.setdata(60);
    s2.printdata();
    return 0;
}