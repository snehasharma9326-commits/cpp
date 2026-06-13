#include <iostream>
#include <algorithm>
using namespace std;


class Student
{
protected:
    int rollNo;
    string name;

public:
    
    Student(int r = 0, string n = "")
    {
        rollNo = r;
        name = n;
    }

    // Inline Function
    inline void displayBasic()
    {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
    }
};

// Derived Class using Inheritance
class Result : public Student
{
private:
    int marks[5];
    int total;
    float average, percentage;

public:
    // Constructor
    Result(int r = 0, string n = "",
           int m1 = 0, int m2 = 0, int m3 = 0,
           int m4 = 0, int m5 = 0)
        : Student(r, n)
    {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;

        calculate();
    }

    // Inline Function
    inline void calculate()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }

        average = total / 5.0;
        percentage = (total / 500.0) * 100;
    }

    // Display Function
    void display()
    {
        displayBasic();

        cout << "Marks : ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }

        cout << endl;

        cout << "Total      : " << total << endl;
        cout << "Average    : " << average << endl;
        cout << "Percentage : " << percentage << "%" << endl;
        cout << "-----------------------------" << endl;
    }

    float getPercentage()
    {
        return percentage;
    }
};

int main()
{
    // Array of 10 students
    Result students[10] = {
        Result(1, "Aman", 85, 90, 88, 92, 80),
        Result(2, "Riya", 95, 91, 93, 90, 94),
        Result(3, "Karan", 78, 82, 80, 76, 79),
        Result(4, "Sneha", 89, 87, 91, 85, 90),
        Result(5, "Rahul", 70, 75, 72, 68, 74),
        Result(6, "Pooja", 96, 98, 97, 95, 99),
        Result(7, "Arjun", 88, 84, 86, 90, 87),
        Result(8, "Neha", 92, 89, 94, 91, 90),
        Result(9, "Vikas", 65, 70, 68, 72, 66),
        Result(10, "Anjali", 81, 83, 85, 80, 82)};

    // Sorting students according to percentage
    sort(students, students + 10,
         [](Result &a, Result &b)
         {
             return a.getPercentage() > b.getPercentage();
         });

    // Display Top 5 Students
    cout << "\n===== TOP 5 STUDENTS OUT OF 10 =====\n\n";

    for (int i = 0; i < 5; i++)
    {
        students[i].display();
    }

    return 0;
}