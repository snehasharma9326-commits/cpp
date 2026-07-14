#include <iostream>
#include <string>
using namespace std;

class Name
{
    
    private:
    string firstName, lastName;

public:
    void getData()
    {
        cout << "Enter first name: ";
        cin >> firstName;

        cout << "Enter last name: ";
        cin >> lastName;
    }

   void display()
   {
      cout<<firstName<<" "<<lastName<< endl;
   }
    
};

int main()
{
    Name n;

    n.getData();
    
    n.display();

    return 0;
}