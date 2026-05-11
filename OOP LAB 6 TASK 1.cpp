#include <iostream>
using namespace std;

class Product{
	private:
		string name;
		float price;

	public:
		Product(string n, float p){
			name = n;
			price = p;
		}

		void displayProduct(){
			cout << "Product Name : " << name << endl;
			cout << "Price        : $" << price << endl;
		}

		string getName(){ return name; }
		float getPrice(){ return price; }
};

class Electronics : public Product{

	private:
		int warrantyYears;

	public:
		Electronics(string n, float p, int years) : Product(n, p){
			warrantyYears = years;
		}

		void displayElectronics(){
			displayProduct();
			cout << "Warranty Years : " << warrantyYears << endl;
		}

		int getWarranty(){ return warrantyYears; }
};

int main(){

	Electronics item("C-Type Data Cable", 340.50, 1);

	cout << "\t*********************" << endl;
	cout << "\t***Product Details***" << endl;
	cout << "\t*********************" << endl;

	item.displayElectronics();

	return 0;
}
