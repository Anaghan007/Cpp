#include<iostream>
using namespace std;
class cricket
{
    private:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float batavg;
    void calcavg(int innings,int notout,int runs);
    public:
    void readdata()
    {
        cout<<"Enter Batsman Code: ";
        cin>>bcode;
        cout<<"Enter Batsman Name: ";
        cin>>bname;
        cout<<"Enter Innings: ";
        cin>>innings;   
        cout<<"Enter Not Out: ";
        cin>>notout;
        cout<<"Enter Runs: ";
        cin>>runs;
        calcavg(innings,notout,runs);
    }
    void displaydata()
    {
        cout<<"Batsman Code: "<<bcode<<endl;
        cout<<"Batsman Name: "<<bname<<endl;
        cout<<"Innings: "<<innings<<endl;
        cout<<"Not Out: "<<notout<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Batsman Average: "<<batavg;
    }
};

void cricket::calcavg(int innings,int notout,int runs)
{
    batavg =runs/(innings-notout);
}

int main ()
{
  class cricket b1;
  b1.readdata();
  b1.displaydata();
  return 0;
}