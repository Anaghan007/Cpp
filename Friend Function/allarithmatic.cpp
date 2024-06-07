#include<iostream>
using namespace std;

class Test 
{
    private:
    int x, y, z;
    public:

    void input() 
    {
       cout << "Enter First Number:";
       cin >> x;
       cout << "Enter Secound Number:";
       cin >> y;
    }
    friend void find(Test t);
};

void find(Test t) 
{
    cout << "Division is: "<<t.x/t.y;
    cout << "\nMultiplication is: "<<t.x*t.y;
    cout << "\nAddition is: "<<t.x+t.y;
    cout << "\nMinus is: "<<t.x-t.y;
}

int main() 
{
   Test t;
   t.input();
   find(t);
   return 0;
}