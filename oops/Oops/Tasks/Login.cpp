#include <iostream>
using namespace std;

// Class name in capital letters as required
class FB {
private:
    string username;
    string password;
    int age;

public:
    // Member function to justify login
    void login() {
        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        cout << "Enter Age: ";
        cin >> age;

        // Check age condition
        if (age >= 18) {
            cout << "\nLogin Successfully!" << endl;
        } else {
            cout << "\nAccess Denied! You must be 18+ to use Facebook." << endl;
        }
    }
};

int main() {
    // Object creation
    FB user;

    // Calling member function
    user.login();

    return 0;
}