#include <iostream>
using namespace std;

class Employee{
	private:
		int id;
		string name;
		float salary;

	public:
		Employee(){
			id = 0;
			name = "No Name";
			salary = 0.0;
		}
		void displayDetails(){
			cout << "----------------------------" << endl;
			cout << "Employee Information" << endl;
			cout << "----------------------------" << endl;

			cout << "Employee ID : " << id << endl;
			cout << "Employee Name : " << name << endl;
			cout << "Employee Salary : " << salary << endl;
		}
};

int main(){

	Employee emp1;
	emp1.displayDetails();

	return 0;
}
