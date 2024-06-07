#include<iostream>
using namespace std;

class Test 
{
    private:
    int x, y;
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
if (t.x > t.y) 
{
   cout << "Largest Value is:" << t.x;
} 
else 
{
   cout << "Largest Value is:" << t.y;
}
}

int main() 
{
   Test t;
   t.input();
   find(t);
   return 0;
}