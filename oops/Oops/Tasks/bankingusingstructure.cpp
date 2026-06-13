#include <iostream>
using namespace std;

// --------- WAY 1: Structure with variable declared at the end ----------
struct Bank1 {
    int acc_no;
    char name[50];
    float balance;
} b1;   // structure variable declared here


// --------- WAY 2: Structure with variable declared separately ----------
struct Bank2 {
    int acc_no;
    char name[50];
    float balance;
};

int main() {

    // variable declaration for second structure
    Bank2 b2;

    // --------- INPUT FOR FIRST ACCOUNT ----------
    cout << "Enter details for Account 1:\n";
    cout << "Account Number: ";
    cin >> b1.acc_no;
    cout << "Name: ";
    cin >> b1.name;
    cout << "Balance: ";
    cin >> b1.balance;

    // --------- INPUT FOR SECOND ACCOUNT ----------
    cout << "\nEnter details for Account 2:\n";
    cout << "Account Number: ";
    cin >> b2.acc_no;
    cout << "Name: ";
    cin >> b2.name;
    cout << "Balance: ";
    cin >> b2.balance;

    // --------- DISPLAY ----------
    cout << "\n--- Account 1 Details ---\n";
    cout << "Account Number: " << b1.acc_no << endl;
    cout << "Name: " << b1.name << endl;
    cout << "Balance: " << b1.balance << endl;

    cout << "\n--- Account 2 Details ---\n";
    cout << "Account Number: " << b2.acc_no << endl;
    cout << "Name: " << b2.name << endl;
    cout << "Balance: " << b2.balance << endl;

    return 0;
}