#include<iostream>
using namespace std;
class box
{
    int l,w,h;
    public:
    void setdata(int a,int b,int c)
    {
        l=a,w=b,h=c;
    }
    int getdata()
    {
        return l*w*h;
    } 
    friend box operator+(box m,box n)
    {
        box t;
        t.l=m.l+n.l;
        t.w=m.w+n.w;
        t.h=m.h+n.h;
        return t;
    }
    friend box operator++(box a)
    {
        box t;
        t.l=++a.l;
        t.w=++a.w;
        t.h=++a.h;
        return t;
    }
};

int main ()
{
  box a,b,c,d;
  a.setdata(2,2,2);
  b.setdata(3,3,3);

  cout<<"Vol of A is: "<<a.getdata()<<endl;
  cout<<"Vol of B is: "<<b.getdata()<<endl;

  c=a+b;
  cout<<"Vol of C is: "<<c.getdata()<<endl;

  d=++c;
  cout<<"Vol of D is: "<<d.getdata()<<endl;
  
}