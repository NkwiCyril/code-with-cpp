#include <iostream>
#include <string>

using namespace std;

class Bank {
    string name;
    string address;

    public:
        void openAccount();
        void depositMoney();
        void withdrawMoney();
        void displayAccount();
};

void Bank::openAccount() {

    cout << "Enter your full name: ";
    cin >> name;
    cout << "Enter your address: ";
    cin >> address;
    cout <<

}

int main() {
	cout << "1.) Open Account" << endl;
	cout << "2.) Deposit Money" << endl;
	cout << "3.) Withdraw Money" << endl;
	cout << "4.) Display Account" << endl;
	cout << "5.) Exit";
	
	return 0;
}