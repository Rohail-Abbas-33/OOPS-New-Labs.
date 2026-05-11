#include <iostream>
using namespace std;

class BankAccount{

	private:
		string accNumber;
		string holderName;
		double amount;

	public:

		BankAccount(string accNumber, string holderName, double amount){
			this->accNumber = accNumber;
			this->holderName = holderName;
			this->amount = amount;
		}

		void displayAccountInfo(){

			cout << "------------------------------" << endl;
			cout << "Bank Account Details" << endl;
			cout << "------------------------------" << endl;

			cout << "Account Number : " << accNumber << endl;
			cout << "Account Holder : " << holderName << endl;
			cout << "Current Balance : " << amount << endl;
		}
};

int main(){

	BankAccount user1("PK0309800780100", "Ali Khan", 10000);

	user1.displayAccountInfo();

	return 0;
}
