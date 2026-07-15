#include <iostream>
using namespace std;

int add(int a, float b); //Function Declaration

int add(int a, float b) //function definition
    { 
    int c ;
    //  cout <<"enter the value of a and b";
    //  cin >>a>>b;
     c = a+b;
     cout<<"addition is "<<c;
    }

    int main()
    {
        add(15.0,20.0);

        return 0;
    }