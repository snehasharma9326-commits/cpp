#include<iostream>
#include<string>
using namespace std;

class Teacher //base class
{
    private:
    string name;
    public:
    void read()
    {
        cout<<"he study C++ with oops regularly"<<endl;
    }
};
class student : public Teacher //derived class
{ 
    public:
    void sport()
    {
        cout<<"he play the cricket and vollyball"<<endl;
    }
};
class exam : public student 
{
 public:

 void marks()

 {
    cout<<"he score highest marks"<<endl;
}
};
int main()
{
    class exam s;
    s.marks();
    s.read();
    return 0;
}