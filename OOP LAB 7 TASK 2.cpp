#include <iostream>
using namespace std;

class Calculator{
	public:
		double add(double a, double b){
			return a + b;
		}

		double multiply(double a, double b){
			return a * b;
		}
};

class Student{

	private:
		Calculator *calc;

	public:
		Student(Calculator *c){
			calc = c;
		}

		void showAddition(double a, double b){
			if(calc){
				cout << "Result (Addition) : " << calc->add(a, b) << endl;
			}
		}

		void showMultiplication(double a, double b){
			if(calc){
				cout << "Result (Multiplication) : " << calc->multiply(a, b) << endl;
			}
		}
};

int main(){

	Calculator c;

	Student s1(&c);
	Student s2(&c);

	cout << "~~ Student 1 ~~" << endl;
	s1.showAddition(5.5, 6.5);
	s1.showMultiplication(5.0, 6.0);

	cout << endl;

	cout << "~~ Student 2 ~~" << endl;
	s2.showAddition(4.5, 3.5);
	s2.showMultiplication(3.0, 2.0);

	return 0;
}
