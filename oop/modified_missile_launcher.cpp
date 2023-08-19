#include <iostream>
#include <windows.h>

using namespace std;

// For this missile launcher, the code below at this point is not the best because it shows that anyone can have access to this missile launcher.
// To prevent this, I can create another class called 'credential' to manage the credentials of the 'soldiers' who have access to the missile launch
// Of course, these credentials are going to bee private and hence would need a way to be accessed by the authorized users. 
// This is where I will require the concept of encapsulation

class credential {
	private:
		string username;
		int passcode;
	
	public:
		void setUsername(string name) {
			username = name;
		}
		void getUsername() {
			return username;
		}
		void setPasscode(int code) {
			passcode = code;
		}
		void getPasscode() {
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
		void fullStop() {
			cout << ".";
		}
};

int main() {
	
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
            Sleep(1000);
            launch.fullStop();
            Sleep(1000);
            launch.fullStop();
            Sleep(1000);
            launch.fullStop();  
			Sleep(1000);  
			cout << "\n";        
	        cout << "Succesfully Launched";
	        
			break;
		case 1:
            launch.launcher(option);
            Sleep(1000);
            launch.fullStop();
            Sleep(1000);
            launch.fullStop();
            Sleep(1000);
            launch.fullStop();  
			Sleep(1000);  
			cout << "\n";  
        	cout << "Launch Aborted";
        	
			break;
		default:
			cout << "Invalid Option!!";
			break;
	}
	
	return 0;
	
}