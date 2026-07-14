#include <iostream>
using namespace std;

int main() {

    int x = 10 , y = 20;
    int* p= & x;
    int* q= & y;

    cout << "addition is" << *p + *q;
    

    return 0;
}