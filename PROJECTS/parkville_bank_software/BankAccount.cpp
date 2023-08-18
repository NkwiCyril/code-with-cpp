#include <iostream>

using namespace std;

struct BankAccount {
	int accountNumber;
	double accountBalance;	
};

int main() {
	BankAccount accountDetails;
	
	cout << "Enter your account number: ";
	cin >> accountDetails.accountNumber;
	cout << "Enter your account balance: ";
	cin >> accountDetails.accountBalance;
	cout << endl;

	cout << "Account Number: " << accountDetails.accountNumber << endl;
	cout << "Account Balance: " << accountDetails.accountBalance;
	
	return 0;
}