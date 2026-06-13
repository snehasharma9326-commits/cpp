#include <iostream>
using namespace std;

// Global variables
string name;
int acc_no;
float balance = 0;

// Default function to create account
void createAccount() {
    cout << "Enter Customer Name: ";
    cin >> name;
    cout << "Enter Account Number: ";
    cin >> acc_no;
    cout << "Account Created Successfully!\n";
}

// Default function to deposit money
void deposit() {
    float amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance += amount;
    cout << "Amount Deposited Successfully!\n";
}

// Default function to withdraw money
void withdraw() {
    float amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    
    if (amount > balance) {
        cout << "Insufficient Balance!\n";
    } else {
        balance -= amount;
        cout << "Withdrawal Successful!\n";
    }
}

// Default function to check balance
void checkBalance() {
    cout << "\n--- Account Details ---\n";
    cout << "Name: " << name << endl;
    cout << "Account Number: " << acc_no << endl;
    cout << "Current Balance: " << balance << endl;
}

// Main function
int main() {
    int choice;

    do {
        cout << "\n===== Banking System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                cout << "Thank you for using Banking System!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}