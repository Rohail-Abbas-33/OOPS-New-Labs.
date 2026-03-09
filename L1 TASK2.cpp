#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo()
    {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[50];

    for(int i=0;i<n;i++)
    {
        cout << "\nEnter data of student " << i+1 << endl;

        cout << "First Name: ";
        cin >> s[i].firstName;

        cout << "Last Name: ";
        cin >> s[i].lastName;

        cout << "Roll Number: ";
        cin >> s[i].rollNumber;

        cout << "Marks: ";
        cin >> s[i].marks;
    }

    cout << "\nStudent Information\n";

    for(int i=0;i<n;i++)
    {
        s[i].displayStudentInfo();
    }

    return 0;
}O
