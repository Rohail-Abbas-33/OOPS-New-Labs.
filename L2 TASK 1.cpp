#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNumber;
    float marks;

    void getData()
    {
        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter roll number: ";
        cin>>rollNumber;

        cout<<"Enter marks: ";
        cin>>marks;
    }

    void displayData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    Student s;

    s.getData();
    s.displayData();

    return 0;
}
