#include <iostream>
#include <string>

using namespace std;
#include "bank_functionalities.h"

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