#include <iostream>
using namespace std;
class book
{

    int bookno;
    int n;
    char booktitle[20];
    float price;
    float tcost;
    void totalcost(int n);

    public:
    book()
    {
    cout << "Enter the book number: ";
    cin >> bookno;
    cout << "Enter the book title: ";
    cin >> booktitle;
    cout << "Enter the book price: ";
    cin >> price;
    cout << "Enter the Pages: ";
    cin >> n;
    totalcost(n);
    }
    void purchase()
    {
        cout << "\nBook number: "<<bookno<<endl;
        cout << "Book title: "<<booktitle<<endl;
        cout << "Book price: "<<price<<endl;
        cout << "Pages: "<<n<<endl;
        cout << "Total Cost: "<<tcost<<endl;
    }
};

void book::totalcost(int n)
{
    tcost = price * n;
}

int main()
{
    book b;
    b.purchase();
}
