#include <iostream>
using namespace std;

class Person{
	private:
		string name;
		int age;

	public:
		Person(string n, int a){
			name = n;
			age = a;
		}

		void setData(string n, int a){
			name = n;
			age = a;
		}

		void displayPerson(){
			cout << "Name : " << name << endl;
			cout << "Age  : " << age << endl;
		}

		string getName(){ return name; }
		int getAge(){ return age; }
};

class Employee : public Person{

	private:
		string employeeId;

	public:
		Employee(string n, int a, string id) : Person(n, a){
			employeeId = id;
		}

		void setId(string id){
			employeeId = id;
		}

		void displayEmployee(){
			displayPerson();
			cout << "Employee ID : " << employeeId << endl;
		}

		string getId(){ return employeeId; }
};

class Manager : public Employee{

	private:
		string department;

	public:
		Manager(string n, int a, string id, string d) : Employee(n, a, id){
			department = d;
		}

		void setDepartment(string d){
			department = d;
		}

		void displayManager(){
			displayEmployee();
			cout << "Department : " << department << endl;
		}

		string getDepartment(){ return department; }
};

int main(){

	string n, id, dept;
	int a;

	cout << "Enter Name : ";
	getline(cin, n);

	cout << "Enter Age : ";
	cin >> a;

	cout << "Enter ID : ";
	cin >> id;
	cin.ignore();

	cout << "Enter Department : ";
	getline(cin, dept);

	Manager m("Ali", 19, "572786", "Software Engineering");

	m.setData(n, a);
	m.setId(id);
	m.setDepartment(dept);

	cout << "----- Person Information -----" << endl;
	m.displayPerson();

	cout << "----- Employee Information -----" << endl;
	m.displayEmployee();

	cout << "----- Manager Information -----" << endl;
	m.displayManager();

	return 0;
}
