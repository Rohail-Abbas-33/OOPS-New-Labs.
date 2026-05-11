#include <iostream>
using namespace std;

class Vehicle{
	private:
		string brand;

	public:
		Vehicle(string b){
			brand = b;
			cout << "Constructor of Vehicle class is called.." << endl;
		}

		void displayVehicle(){
			cout << "Brand : " << brand << endl;
		}
};

class Car : public Vehicle{

	private:
		int lights;

	public:
		Car(string b, int l) : Vehicle(b){
			lights = l;
			cout << "Constructor of Car class is called.." << endl;
		}

		void displayCar(){
			displayVehicle();
			cout << "Number of Lights : " << lights << endl;
		}
};

class ElectricCar : public Car{

	private:
		int battery;

	public:
		ElectricCar(string b, int l, int batt) : Car(b, l){
			battery = batt;
			cout << "Constructor of ElectricCar class is called.." << endl;
		}

		void displayElectricCar(){
			displayCar();
			cout << "Battery Power : " << battery << " KWH" << endl;
		}
};

int main(){

	ElectricCar ec1("TOYOTA", 6, 2000);

	cout << endl;

	cout << "------------------------" << endl;
	cout << "Vehicle Details" << endl;
	cout << "------------------------" << endl;

	ec1.displayElectricCar();

	return 0;
}
