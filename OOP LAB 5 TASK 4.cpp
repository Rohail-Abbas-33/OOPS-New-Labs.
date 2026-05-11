#include <iostream>
using namespace std;

class Printer{
	public:
		void printDocument(){
			cout << "Printing your document..." << endl;
		}
};

class Scanner{
	public:
		void scanDocument(){
			cout << "Scanning your document..." << endl;
		}
};

class Photocopier : public Printer, public Scanner{
	public:
		void photocopy(){
			cout << "----- Photocopier -----" << endl;
			scanDocument();
			printDocument();
		}
};

int main(){

	Photocopier p;

	cout << "----- Printer -----" << endl;
	p.printDocument();

	cout << endl;

	cout << "----- Scanner -----" << endl;
	p.scanDocument();

	cout << endl;

	p.photocopy();

	return 0;
}
