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
    student()
    {
    cout<<"\nAdmission Number: ";
    cin>> admno;
    cout<<"\nStudent Name: ";
    cin>> sname;
    cout<<"\nEnglish Marks: ";
    cin>>eng;
    cout<<"\nMath Marks: ";
    cin>>maths;
    cout<<"\nScience Marks: ";
    cin>>science;
   
    }
    void Showdata()
    {
    cout<<"\nAdmission Number: "<<admno;
    cout<<"\nStudent Name: "<<sname;
    cout<<"\nEnglish: "<<eng;
    cout<<"\nMath: "<<maths;
    cout<<"\nScience: "<<science;
    cout<<"\nTotal is: "<<ctotal(eng,maths,science);
    }
};

float student:: ctotal(float eng,float maths,float science)
{
    total=eng+maths+science;
    return total;
}

int main ()
{
  class student s1;
  s1.Showdata();
}