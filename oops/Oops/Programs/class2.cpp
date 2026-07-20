#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int accNo, double bal) {
        name = n;
        accountNumber = accNo;
        balance = bal;
    }

    //Credit
    void deposit(double amount) {
        balance += amount;
        cout << "Amount Credited: " << amount << endl;
    }

    // Debit
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance -= amount;
            cout << "Amount Debited: " << amount << endl;
        }
    }

    // Display Details
    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount obj("Shubham", 12345, 5000);

    obj.display();

    obj.deposit(2000);   
    obj.withdraw(1500); 

    obj.display();

    return 0;
}