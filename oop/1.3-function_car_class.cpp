#include <iostream>
using namespace std;

class car {
	public:
		string brand;
		string model;
		int year;
};

void displayDetails(const car& c) {
	cout << "Car Brand: " << c.brand << endl;
	cout << "Car Model: " << c.model << endl;
	cout << "Year of Production: " << c.year <<  endl << endl;
}

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
	displayDetails(car1);
	
	cout << "\tCar2" << endl;
	displayDetails(car2);
	
	return 0;
}