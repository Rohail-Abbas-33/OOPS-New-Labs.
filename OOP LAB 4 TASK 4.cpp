#include <iostream>
using namespace std;

class Locker{
	public:
		Locker(){
			cout << "Locker allocated to customer (Constructor called)" << endl;
		}

		~Locker(){
			cout << "Locker returned by customer (Destructor called)" << endl;
		}
};

int main(){

	cout << "=== First Object (Stack Allocation) ===" << endl;
	cout << "Starting..." << endl;

	{
		Locker l1;
	}

	cout << "Ending..." << endl;

	cout << endl;

	cout << "=== Second Object (Heap Allocation) ===" << endl;
	cout << "Starting..." << endl;

	Locker* l2 = new Locker();
	delete l2;

	cout << "Ending..." << endl;

	return 0;
}
