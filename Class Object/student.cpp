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
    void Takedata()
    {
    cout<<"Admission Number: ";
    cin>> admno;
    cout<<"Student Name: " ;
    cin>> sname;
    cout<< "Marks in English: ";
    cin>>eng;
    cout<< "Marks in Maths: ";
    cin>>maths;
    cout<< "Marks in Science: ";
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
  s1.Takedata();
  s1.Showdata();
  return 0;
}