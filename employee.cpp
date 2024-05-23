#include<iostream>
using namespace std;
class student 
{
    private:
        int admno;
        char sname[20];
        float eng,maths,science;
        float total;
        float ctotal(float eng,float maths,float science);
    public:
        float takedata();
       
    void setdata();
    void printdata()
    {
        cout<<"Enter Addmintion Number: ";
        cin>>admno;
        cout<<"Enter Student Name: ";
        cin>>sname[20];
        cout<<"Enter English Marks: ";
        cin>>eng;
        cout<<"Enter Maths Marks: ";
        cin>>maths;
        cout<<"Enter Science Marks: ";
        cin>>science;
        cout<<"Enter Total Marks: "<<ctotal(eng,maths,science)<<endl;
            
    }
};
float student:: ctotal(float eng,float maths,float science)
{
    total=eng,maths,science;
    return total;

}

int main()
{
    class student s1;

    s1.setdata();
    return 0;
}