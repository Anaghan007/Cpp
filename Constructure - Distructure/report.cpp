#include <iostream>
#include <string>
using namespace std;
class REPORT 
{      
    private: 
    int adno;
    string name;
    float marks[5];
    float average;

    float GETAVG() 
    {
        float sum = 0.0;
        for (int i = 0; i < 5; ++i) 
        {
            sum += marks[i];
        }
        return sum / 5.0;
    }

    public:
    REPORT()
    {
        cout << "Enter admission number (4 digits): ";
        cin >> adno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks for 5 subjects:-\n";
        for (int i = 0; i < 5; ++i) 
        {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
        average = GETAVG();
    }

    void DISPLAYINFO() 
    {
        cout << "\nAdmission Number: " << adno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: \n";
        for (int i = 0; i < 5; ++i) 
        {
            cout << "Subject " << (i + 1) << ": "<< marks[i]<<endl;
        }
        cout << endl;
        cout << "Average Marks: " << average << endl;
    }
};

int main() 
{
    REPORT report;
    report.DISPLAYINFO();
    return 0;
}
