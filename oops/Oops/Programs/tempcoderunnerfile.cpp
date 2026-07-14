#include <iostream>
using namespace std;

class Matrix {
private:
    int a[3][3], b[3][3], sum[3][3];

public:
    // Function to input matrices
    void input() {
        cout << "Enter elements of First Matrix (3x3):" << endl;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cin >> a[i][j];
            }
        }

        cout << "Enter elements of Second Matrix (3x3):" << endl;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cin >> b[i][j];
            }
        }
    }

    // Function to add matrices
    void add() {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }
    }

    // Function to display result
    void display() {
        cout << "Sum of Matrices:" << endl;

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix obj;

    obj.input();
    obj.add();
    obj.display();

    return 0;
}