#include <iostream>
#include <windows.h>

using namespace std;

class missileLauncher{
	public:
		void launcher(int option) {
			if (option == 0) {
				cout << "Missile Launch Ongoing";
			} else if (option == 1) {
				cout << "Aborting Missile Launch" << endl;
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