#include<iostream>
using namespace std;
class test
{
    private:
    int testcode;
    char description[20];
    int nocandidate;
    int centerreqd;   
    void calcntr(int nocandidate);
    public:
    void schedule()
    {
        cout<<"\nEnter the number of candidates: ";
        cin>>nocandidate;
        cout<<"\nEnter the test code: ";
        cin>>testcode;
        cout<<"\nEnter the description of the test: ";
        cin>>description;
        calcntr(nocandidate);
    }
    void disptest()
    {
        cout<<"\nTest code: "<<testcode;
        cout<<"\nNumber of candidates: "<<nocandidate;
        cout<<"\nNumber of centers required: "<<centerreqd;
        cout<<"\nDescription of the test: "<<description;
    }
};

void test::calcntr(int nocandidate)
{
    centerreqd=(nocandidate/100+1);
}

int main ()
{
  class test t1;
  t1.schedule();
  t1.disptest();
  return 0;
}