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
	car1.brand = "Benz";
	car1.model = "G-Class";
	car1.year = 2019;
	
	car car2;
	car2.brand = "Toyota";
	car2.model = "Camry";
	car2.year = 2020;
	
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