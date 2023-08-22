#include <iostream>
#include <windows.h>

using namespace std;

// For this missile launcher, the code below at this point is not the best because it shows that anyone can have access to this missile launcher.
// To prevent this, I can create another class called 'credential' to manage the credentials of the 'soldiers' who have access to the missile launch
// Of course, these credentials are going to bee private and hence would need a way to be accessed by the authorized users. 
// This is where I will require the concept of encapsulation

// Let me make in such a way that only three commanders are able to get access to the missile launch system

class credential {
	private:
		string username;
		int passcode;
	public:
		void setUsername(string name) {
			username = name;
		}
		string getUsername() {
			return username;
		}
		void setPasscode(int code) {
			passcode = code;
		}
		int getPasscode() {
			return passcode;
		}		
		
};

class missileLauncher{
	public:
		void launcher(int option) {
			if (option == 0) {
				cout << "Missile Launch Ongoing";
			} else if (option == 1) {
				cout << "Aborting Missile Launch";
			}
		}
};

void pending(int n, int t, string sym) {
	for (int i = 0; i <= n; i++) {
		cout << sym;
		Sleep(t);
	}
	cout << endl << endl;

}

void instruction() {	
	missileLauncher launch;

	cout << "\tWelcome to Missile Launch Control" << endl;
	cout << "Choose from the options below to initialize launch." << endl;
	cout << "Options:" << endl;
	cout << "0: Launch Missile" << endl;
	cout << "1: Abort Missile Launch" << "\n\n";	

	int option;
	cout << "Enter your option: ";
	cin >> option;
	
	switch(option) {
		case 0:
			launch.launcher(option);
			pending(3, 500, ".");
			cout << "Succesfully Launched";
				
			break;
		case 1:
			launch.launcher(option);
			pending(3, 500, ".");   
			cout << "Launch Aborted";
				
			break;
			default:
				cout << "Invalid Option!!";
				break;
		}
}

int main() {
 	
 	credential user;
 
	pending(55, 50, "#");
	string username;
	int passcode;
	cout << "\tCYRIX MILITARY TECH UNIT" << "\n";
	cout << "ENTER THE FOLLOWING CREDENTIALS TO GAIN ACCESS" << "\n";
	cout << "YOU HAVE A SINGLE TRY!" << "\n\n";
	cout << "Username: ";
	cin >> username;
	cout << "Passcode: ";
	cin >> passcode;

	
	
	if(username == "Heroku" && passcode == 25542) {
		cout << "\n";
		instruction();
	} else {
		cout << "Invalid Credentials Inserted." << endl;
		cout << "Sorry! You cannot access the missile launch sequence";
	}
	return 0;
}