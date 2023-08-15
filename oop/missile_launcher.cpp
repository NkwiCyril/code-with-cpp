#include <iostream>
#include <windows.h>
using namespace std;

class missileLauncher{
	public:
		void launcher(int option) {
			if (option == 0) {
				cout << "Missile Launch Ongoing..." << endl;
			} else if (option == 1) {
				cout << "Aborting Missile Launch..." << endl;
			}
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
        for (int i = 0; i < 5; i++) {
            launch.launcher(option);
            Sleep(1000);
        }
        cout << "Succesfully Launched!!";
			break;
		case 1:
        for (int i = 0; i < 5; i++) {
            launch.launcher(option);
            Sleep(1000); 
        }

        cout << "Launch Aborted!!";
			break;
		default:
			cout << "Invalid Option!!";
			break;
	}
	
	return 0;
	
}