#include "bank_model.h"

void Bank::openAccount() {
	cout << endl;
    cout << "Enter your full name: ";
    cin >> name;
    cout << "Enter your address: ";
    cin >> address;
    cout << "What type of account do you want to open? Saving (s) or Currrent(c): ";
	cin >> accountType;
	cout << "Enter amount to deposit: ";
	cin >> balance;
	cout << "Your account is created \n";
	
}

void Bank::depositMoney() {
	int amount;
	
	cout << endl;
	cout << "Enter how much you want to deposit: ";
	cin >> amount;
	
	balance += amount; // new balance
	
	cout << "Total amount deposited: \t" << balance;
}

void Bank::displayAccount() {
	
	cout << endl;
	cout << "Your full name: " << name << endl;
	cout << "Your address: " << address << endl;
	cout << "Type of account you opened: " << accountType << endl;
	cout << "Amount deposited: " << balance;
}

void Bank::withdrawMoney() {
	float amount;
	
	cout << endl;
	cout << "\n Withdraw";
	cout << "Enter amount to withdraw: ";
	cin >> amount;
	
	balance-=amount;
	
	cout << "Total amount left: " << balance;
	
}
