#include <iostream>
using namespace std;

class Student {
public:
    string name;

    void display() {
        cout << "Name: " << name;
    }
};

int main() {
    Student s;
    s.name = "shalini";
    s.display();

    return 0;
}