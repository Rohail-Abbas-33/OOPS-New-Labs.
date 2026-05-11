#include <iostream>
#include <iomanip>
using namespace std;

class Employee{
	private:
		string name;
		double salary;

	public:
		Employee(string n, double s){
			name = n;
			salary = s;
		}

		void displayEmployee(){
			cout << "Name   : " << name << endl;
			cout << "Salary : $" << fixed << setprecision(0) << salary << endl;
		}

		string getName(){ return name; }
		double getSalary(){ return salary; }
};

class Developer : public Employee{

	private:
		string programmingLanguage;

	public:
		Developer(string n, double s, string pl) : Employee(n, s){
			programmingLanguage = pl;
		}

		void displayDeveloper(){
			displayEmployee();
			cout << "Programming Language : " << programmingLanguage << endl;
		}

		string getLanguage(){ return programmingLanguage; }
};

class Designer : public Employee{

	private:
		string designTool;

	public:
		Designer(string n, double s, string dt) : Employee(n, s){
			designTool = dt;
		}

		void displayDesigner(){
			displayEmployee();
			cout << "Design Tool : " << designTool << endl;
		}

		string getTool(){ return designTool; }
};

int main(){

	Developer dev("ROHAIL", 5000000, "C++");
	cout << "----- Developer Information -----" << endl;
	dev.displayDeveloper();

	cout << endl;

	Designer des("ABBAS", 7000000, "Canva");
	cout << "----- Designer Information -----" << endl;
	des.displayDesigner();

	return 0;
}
