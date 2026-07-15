#include <iostream>
using namespace std;

class youtube{
    private:
    int subscribers;
    public:
    
        youtube(int s){
            subscribers = s;
        }
    void operator  ++(){ //syntax of operator overloading
        subscribers ++;
    }
    void display(){
        cout<<"no of subscribers is"<<subscribers;
    }
};
int main(){
    youtube y(500);
    ++y;
    y.display();
}
 