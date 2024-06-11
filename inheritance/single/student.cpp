#include<iostream>
using namespace std;
class marksheet
{
    protected:
    char name[20];
    public:
    int roll_no;
    int sub[3];
    int total;
    float per;
};

class derived : public marksheet
{
    public:
    void student()
    {
        cout<<"Student Name: ";
        cin>>name;
        cout<<"Student Roll Number: ";
        cin>>roll_no;             
        cout<<"Subject 1: ";
        cin>>sub[0];                          
        cout<<"Subject 2: ";
        cin>>sub[1];                          
        cout<<"Subject 3: ";
        cin>>sub[2];
        total = sub[0]+sub[1]+sub[2];
        cout<<"Total is: "<<total<<endl;
        per = total/3;
        cout<<"Per is: "<<per<<endl;
    }
};

int main()
{
    derived d;
    d.student();
}