#include <iostream>
using namespace std;
class book
{

    int bookno;
    char booktitle[20];
    float price;
    float tcost;
    void totalcost(int n)
    {
        tcost = price * n;
        cout << tcost;
    }

public:
    void input();
    void purchase();
};

void book::input()
{
    cout << "Enter the book number: ";
    cin >> bookno;
    cout << "Enter the book title: ";
    cin >> booktitle;
    cout << "Enter the book price: ";
    cin >> price;
}

void book::purchase()
{
    int n;
    cout << "Enter the Pages: ";
    cin >> n;
    totalcost(n);
}

int main()
{
    book b;
    b.input();
    b.purchase();
}
