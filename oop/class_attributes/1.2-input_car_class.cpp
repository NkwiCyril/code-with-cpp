#include <iostream>
using namespace std;

class car {
	public:
		string brand;
		string model;
		int year;
};

int main() {
	car car1;
	cout << "\tProperties of Car 1" << endl;
	cout << "Enter Car Brand: " << endl;
	cin >> car1.brand;
	cout << "Enter Car Model: " << endl;
	cin >> car1.model;
	cout << "Year of Production: " << endl;
	cin >> car1.year;
	
	car car2;
	cout << "\tProperties of Car 2" << endl;
	cout << "Enter Car Brand: " << endl;
	cin >> car2.brand;
	cout << "Enter Car Model: " << endl;
	cin >> car2.model;
	cout << "Year of Production: " << endl;
	cin >> car2.year;
	
	
	cout << "\tCar1" << endl;
	cout << "Car Brand: " << car1.brand << endl;
	cout << "Car Model: " << car1.model << endl;
	cout << "Year of Production: " << car1.year << endl << endl;
	
	cout << "\tCar2" << endl;
	cout << "Car Brand: " << car2.brand << endl;
	cout << "Car Model: " << car2.model << endl;
	cout << "Year of Production: " << car2.year;
	
	
	return 0;
}