#include <iostream>
using namespace std;


class Bank {
public:
    string bankName;

    void setBank() {
        bankName = "SBI";
    }

    void displayBank() {
        cout << "Bank Name: " << bankName << endl;
    }
};


class Customer : public Bank {
public:
    string customerName;

    void setCustomer() {
        customerName = "Ram Prasad";
    }

    void displayCustomer() {
        cout << "Customer Name: " << customerName << endl;
    }
};

class AccountAccess : public Customer {
public:
    int accountNumber;

    void setAccount() {
        accountNumber = 123456789;
    }

    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
    }

    
};


int main() {
    AccountAccess obj;

    obj.setBank();
    obj.setCustomer();
    obj.setAccount();

    return 0;
}