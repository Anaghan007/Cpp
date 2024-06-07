#include<iostream>
using namespace std;
class box
{
    friend box add(box, box);
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
};

box add(box a,box b)
{
    box t;
    t.l=a.l+b.l;
    t.w=a.w+b.w;
    t.h=a.h+b.h;
    return t;
}

int main ()
{
  box a,b,c;
  add(a,b);
  a.setdata(2,2,2);
  b.setdata(3,3,3);

  cout<<"Vol of A is: "<<a.getdata()<<endl;
  cout<<"Vol of B is: "<<b.getdata()<<endl;

  c=add(a,b);
  cout<<"Vol of C is: "<<c.getdata()<<endl;
}