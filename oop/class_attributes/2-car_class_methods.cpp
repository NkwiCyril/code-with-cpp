#include <iostream>
using namespace std;

class car {
	public:
		string brand;
		string model;
		int year;
		int speed(int maxSpeed);
};

int car::speed(int maxSpeed) {
	return maxSpeed;
}

void displayDetails(const car& c) {
	cout << "Car Brand: " << c.brand << endl;
	cout << "Car Model: " << c.model << endl;
	cout << "Year of Production: " << c.year <<  endl;
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
	cout << "Maximum Speed (mph): " << car1.speed(800) << "\n\n";
	
	cout << "\tCar2" << endl;
	displayDetails(car2);
	cout << "Maximum Speed (mph): " << car2.speed(700) << "\n\n";
	return 0;
}