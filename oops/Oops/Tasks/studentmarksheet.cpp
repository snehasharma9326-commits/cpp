#include <iostream>
using namespace std;

// Function to calculate result
void calculateResult(string name, string className, char section, int enroll,
                     float m1, float m2, float m3, float m4, float m5)
{
    float total, average, percentage;
    char grade;

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;
    percentage = (total / 500) * 100;

    // Grade calculation
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 50)
        grade = 'D';
    else
        grade = 'F';

    // Display result
    cout << "\n----- STUDENT MARKSHEET -----\n";
    cout << "Name: " << name << endl;
    cout << "Class: " << className << endl;
    cout << "Section: " << section << endl;
    cout << "Enrollment No: " << enroll << endl;

    cout << "\nMarks:\n";
    cout << "Subject 1: " << m1 << endl;
    cout << "Subject 2: " << m2 << endl;
    cout << "Subject 3: " << m3 << endl;
    cout << "Subject 4: " << m4 << endl;
    cout << "Subject 5: " << m5 << endl;

    cout << "\nTotal: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
}

// Main function
int main()
{
    string name, className;
    char section;
    int enroll;
    float m1, m2, m3, m4, m5;

    // Input
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter class: ";
    getline(cin, className);

    cout << "Enter section: ";
    cin >> section;

    cout << "Enter enrollment number: ";
    cin >> enroll;

    cout << "Enter marks of 5 subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    // Function call (Call by Value)
    calculateResult(name, className, section, enroll, m1, m2, m3, m4, m5);

    return 0;
}