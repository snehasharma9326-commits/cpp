#include <iostream>
using namespace std;
class calculator //class name
{
    public: //access specifier
    int a, b; //data members
    void getdata() //member function
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    void add() //member function
    {
        cout << "Sum: " << a + b << endl;
    }
    void subtract() //member function
    {
        cout << "Difference: " << a - b << endl;
    }
};
int main() //main function
{
    calculator calc; //object of the class
    calc.getdata(); //calling member function to get data
    calc.add(); //calling member function to perform addition
    calc.subtract(); //calling member function to perform subtraction
    return 0;
}