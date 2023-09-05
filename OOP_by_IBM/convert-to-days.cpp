#include <iostream>

using namespace std;

void convertNumToDays() {

    int num;
    cout << "Input number: ";
    cin >> num;

    switch(num) {
        case 1:
        cout << "Monday";
        break;

        case 2:
        cout << "Tuesday";
        break;

        case 3:
        cout << "Wednesday";
        break;

        case 4:
        cout << "Thursday";
        break;

        case 5:
        cout << "Friday";
        break;

        case 6:
        cout << "Saturday";
        break;

        case 7:
        cout << "Sunday";
        break;

        default:
        cout << "Invalid Number!";

    }

}

int main() {
    
	convertNumToDays();
	
	return 0;
}