#include <iostream>
using namespace std;

class Student {
public:
    void display(string name) {
        cout << "Student Name: " << name;
    }
};

int main() {
    Student s;

    s.display("shalini");

    return 0;
}