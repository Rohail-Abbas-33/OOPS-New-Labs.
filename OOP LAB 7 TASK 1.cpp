#include <iostream>
using namespace std;

class Display{
	private:
		double finalValue;

	public:
		Display(){
			finalValue = 0.0;
		}

		void showResult(double value){
			finalValue = value;
			cout << "Result : " << finalValue << endl;
		}

		double getFinalValue() const{
			return finalValue;
		}
};

class Calculator{
	private:
		Display display;

	public:
		Calculator(){}

		void add(double a, double b){
			double result = a + b;
			display.showResult(result);
		}

		void multiply(double a, double b){
			double result = a * b;
			display.showResult(result);
		}

		void showPreviousResult() const{
			cout << "Previous Result : " << display.getFinalValue() << endl;
		}
};

int main(){

	Calculator c1;

	c1.add(6.4, 5.6);
	c1.multiply(1.5, 3.0);
	c1.showPreviousResult();

	return 0;
}
