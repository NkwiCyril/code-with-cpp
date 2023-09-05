#include <iostream>
#include <string>

using namespace std;

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



int main() {
	int option;
	char ch;
	
	Bank bankAcc;
	
	do {
		cout << "1.) Open Account\n";
		cout << "2.) Deposit Money\n";
		cout << "3.) Withdraw Money\n";
		cout << "4.) Display Account\n";
		cout << "5.) Exit\n";
				
		cout << "Select an option from above: ";
		cin >> option;	
		cout <<"\n\n";
		switch(option){
			
			case 1:
				cout << "\tOPEN ACCOUNT";
				bankAcc.openAccount();
				break;
			case 2:
				cout << "\tDEPOSIT MONEY";
				bankAcc.depositMoney();
				break;
			case 3:
				cout << "\tWITHDRAW MONEY";
				bankAcc.withdrawMoney();
				break;
			case 4:
				cout << "\tDISPLAY ACCOUNT";
				bankAcc.displayAccount();
				break;
			case 5:
				exit(1);
			default:
				cout << "This option does not exist. Try again! \n";
	}
	
	cout << "\n To select Next ption press 'y' (Yes).";
	cout << "\n To exit press 'n' (No)." << endl;
	cout << "Option: ";
	cin >> ch;
	
	if (ch == 'n' || ch == 'N') {
		exit(0);
		}
		
	} while (ch == 'y' || ch == 'Y');
		
	return 0;
}