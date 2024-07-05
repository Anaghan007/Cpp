#include <iostream>
#include <string>
using namespace std;

    class MenuItem
{
    public:
    int id;
    string name;
    double price;

    MenuItem(int id = 0, string name = "", double price = 0.0) : id(id), name(name), price(price) {

    }
};

class User 
{
    public:
    string name;
    string contact;

    User(string name = "", string contact = "") : name(name), contact(contact) {}

    void getUserInfo()
     {
        cout << "Enter customer name: ";
        getline(cin, name);
        cout << "Enter customer contact: ";
        getline(cin, contact);
    }

    void displayUserInfo()
     {
        cout << "Customer Name: " << name << "\n";
        cout << "Customer Contact: " << contact << "\n";
    }
};

class Order 
{
     private:
    MenuItem items[100];
    int itemCount;
    double totalAmount;
    bool confirmed;
    public:
    Order() : itemCount(0), totalAmount(0.0), confirmed(false) {

    }

    void addItem(MenuItem item)
     {
        items[itemCount++] = item;
        totalAmount += item.price;
    }

    void confirmOrder() 
    {
        confirmed = true;
    }

    bool isConfirmed() 
    {
        return confirmed;
    }

    void displayOrder() 
    {
        cout << "Order:\n";
        for (int i = 0; i < itemCount; i++) 
        {
            cout << items[i].name << " - ₹" << items[i].price << "\n";
        }
        cout << "Total: ₹" << totalAmount << "\n";
    }

    double getTotalAmount() 
    {
        return totalAmount;
    }
};

class Bill {
public:
    static void generateBill(Order order, User user) 
      {

        if (order.isConfirmed()) 
        {
            cout << "Generating bill...\n";
            user.displayUserInfo();
            order.displayOrder();
            cout << "Please pay: ₹" << order.getTotalAmount() << "\n";
        } else {
            cout << "Order is not confirmed yet.\n";
        }
    }
};

class Hotel {
private:
    MenuItem menu[100];
    int menuCount;
public:
    Hotel() : menuCount(0) {

    }

    void addMenuItem(int id, string name, double price) 
    {
        menu[menuCount++] = MenuItem(id, name, price);
    }

    void displayMenu() 
    {
        cout << "Menu:\n";
        for (int i = 0; i < menuCount; i++)
         {
            cout << menu[i].id << ". " << menu[i].name << " - ₹" << menu[i].price << "\n";
        }
    }

    void placeOrder() 
    {
        User user;
        user.getUserInfo();
        Order order;
        int itemId;
        char choice;
        do {
            cout << "Enter item ID to order: ";
            cin >> itemId;
            cin.ignore(); 
            bool itemFound = false;
            for (int i = 0; i < menuCount; i++)
             {
                if (menu[i].id == itemId) 
                {
                    order.addItem(menu[i]);
                    itemFound = true;
                    break;
                }
            }
            if (!itemFound) 
            {
                cout << "Item not found.\n";
            }
            cout << "Do you want to add more items? (y/n): ";
            cin >> choice;
            cin.ignore(); 
        } while (choice == 'y' || choice == 'Y');
        order.confirmOrder();
        Bill::generateBill(order, user);
    }
};

int main() 
{
    Hotel hotel;
    hotel.addMenuItem(1, "Pasta", 150);
    hotel.addMenuItem(2, "Pizza", 250);
    hotel.addMenuItem(3, "Salad", 100);
    

    hotel.displayMenu();
    hotel.placeOrder();

    return 0;
}