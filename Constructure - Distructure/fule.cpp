#include<iostream>
using namespace std;
class fule
{
    private:
    int fnum;
    char mdestination[50];
    float mdistance;
    float mfule;   
    void calfule(float mdistance);
    public:
    fule()
    {
        cout<<"Enter the number of flight: ";
        cin>>fnum;
        cout<<"Enter the destination: ";
        cin>>mdestination;
        cout<<"Enter the distance: ";
        cin>>mdistance;
        calfule(mdistance);
    }
    void showinfo()
    {
        cout<<"\nNumber of flight: "<<fnum<<endl;
        cout<<"Destination: "<<mdestination<<endl;
        cout<<"Distance: "<<mdistance<<endl;
        cout<<"Fule: "<<mfule<<endl;
    }
};

void fule::calfule(float mdistance)
{
    if(mdistance<=1000)
    {
        mfule=500;
    }
    if(mdistance>1000 && mdistance<=2000)
    {
        mfule=1100;
    }
    if(mdistance>2000)
    {
        mfule=2200;
    }
}

int main ()
{
  class fule f1;
  f1.showinfo();
  return 0;
}