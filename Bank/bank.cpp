#include <iostream> 
using namespace std; 
class bank  
{ 
    protected: 
    int pin; 
    int accountNumber;  
    public: 
    char name[50]; 
    int balance;  
    void create_account()  
    { 
        cout << "Enter your name: "; 
        cin>>name; 
        cout << "Enter account number: "; 
        cin >> accountNumber; 
        cout << "Set PIN: "; 
        cin >> pin; 
        cout << "Enter initial balance: "; 
        cin >> balance; 
        cout << "Account created successfully!\n"; 
    } 
    void show_account(int enteredPin) 
    { 
        if (enteredPin == pin) 
        { 
            cout << "\nAccount Details\n"; 
            cout << "-------------------\n"; 
            cout << "Name: " << name << endl; 
            cout << "Account Number: " << accountNumber << endl; 
            cout << "Balance: $" << balance << endl; 
        } 
        else 
        { 
            cout << "Incorrect PIN. Access denied.\n"; 
        } 
    } 
    void deposit_money(int amount, int enteredPin) 
    { 
        if (enteredPin == pin) 
        { 
            if (amount > 0)
            { 
                balance += amount; 
                cout << "Deposited $" << amount << " successfully.\n"; 
            } 
            else 
            { 
                cout << "Deposit amount must be positive.\n"; 
            } 
        } 
        else 
        { 
            cout << "Incorrect PIN. Access denied.\n"; 
        } 
    } 
    void withdraw_money(int amount, int enteredPin) 
     { 
        if (enteredPin == pin)  
        { 
            if (amount > 0) 
            { 
                if (balance >= amount) 
                { 
                    balance -= amount; 
                    cout << "Withdrawn $" << amount << " successfully.\n"; 
                } 
                else 
                { 
                    cout << "Insufficient balance.\n"; 
                } 
            } 
            else 
            { 
                cout << "Withdrawal amount must be positive.\n"; 
            } 
        } 
        else 
        { 
            cout << "Incorrect PIN. Access denied.\n"; 
        } 
    } 
}; 
int main()  
{ 
    bank customer;  
    int choice, amount, enteredPin; 
    do  
    { 
        cout << "\n***** Menu *****" << endl; 
        cout << "1. Create Account" << endl; 
        cout << "2. Display Account" << endl; 
        cout << "3. Deposit Money" << endl; 
        cout << "4. Withdraw Money" << endl;
        cout << "5. Check Balance" << endl; 
        cout << "6. Exit" << endl; 
        cout << "Enter your choice: "; 
        cin >> choice; 
        switch (choice)  
        { 
            case 1: 
                customer.create_account(); 
                break; 
            case 2: 
                cout << "Enter PIN to view account details: "; 
                cin >> enteredPin; 
                customer.show_account(enteredPin); 
                break; 
            case 3: 
                cout << "Enter PIN to deposit money: "; 
                cin >> enteredPin; 
                cout << "Enter amount to deposit: $"; 
                cin >> amount; 
                customer.deposit_money(amount, enteredPin); 
                break; 
            case 4: 
                cout << "Enter PIN to withdraw money: "; 
                cin >> enteredPin; 
                cout << "Enter amount to withdraw: $"; 
                cin >> amount; 
                customer.withdraw_money(amount, enteredPin); 
                break; 
            case 5: 
                cout << "Withdrawable Balance: "<<customer.balance;
                break; 
            case 6: 
                cout << "Exiting program. Goodbye!\n"; 
                break; 
            default: 
                cout << "Invalid choice. Please enter a number from 1 to 6.\n"; 
        } 
    } 
    while (choice != 6); 
    return 0; 
}