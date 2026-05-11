#include <iostream>
using namespace std;

class Person {
	private:
    	string name;
    	int age;

	public:
		Person(){
			name = "Unknown";
			age = 0;
		}

    	void setPersonData(string n, int a) {
        	name = n;
        	age = a;
    	}

	    string getName() { return name; }
	    int getAge() { return age; }

    	void displayPersonInfo() {
        	cout << "----- Person Information -----" << endl;
        	cout << "Name : " << name << endl;
        	cout << "Age  : " << age << endl;
        	cout << endl;
    	}
};

class Student : public Person {

	private:
    	string studentId;

	public:

		Student() : Person(){
			studentId = "Not Assigned";
		}

    	void setStudentData(string id) {
        	studentId = id;
    	}

    	void displayStudentInfo() {
        	cout << "----- Student Information -----" << endl;
        	cout << "Name : " << getName() << endl;
        	cout << "Age  : " << getAge() << endl;
        	cout << "ID   : " << studentId << endl;
        	cout << endl;
    	}
};

int main() {

	string name, id;
	int age;

	cout << "Enter Name: ";
	getline(cin, name);

	cout << "Enter Age: ";
	cin >> age;

	cout << "Enter Student ID: ";
	cin >> id;

	Student s1;

	s1.setPersonData(name, age);
	s1.setStudentData(id);

	s1.displayPersonInfo();
	s1.displayStudentInfo();

	return 0;
}
