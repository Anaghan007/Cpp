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
    cricket()
    {
        cout << "\nBatsman Code: ";
        cin >> bcode;
        cout << "\nBatsman Name: ";
        cin >> bname;
        cout << "\nInnings: ";
        cin >> innings;
        cout << "Player Notout: ";
        cin >> notout;
        cout << "Total Runs: ";
        cin >> runs;
        calcavg(innings,notout,runs);
    }
    void printdata()
    {
        cout << "\nBatsman Code: " << bcode << endl;
        cout << "Batsman Name: " <<bname << endl;
        cout << "Innings: "<<innings << endl;
        cout << "Player Notout: "<<notout << endl;
        cout << "Total Runs: "<<runs << endl;
        cout << "Total Avrage: "<<batavg;
    }
};

void cricket::calcavg(int innings,int notout,int runs)
{
    batavg =runs/(innings-notout);
}
int main()
{
    cricket b1;
    b1.printdata();
}