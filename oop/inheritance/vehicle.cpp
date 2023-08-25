
#include <iostream>

using namespace std;

class Vehicle {
    public:
        string brand = "Lambo";
        void honk() {
            cout << "Tuut, tuut! \n";
        }
};

class Car:public Vehicle {
    public:
        int year = 2014;
        string model = "Aventador";
};

// there is another level of inheritance known as multilevel inheritance and here, a class 
// (grand-child) will be inheriting from the child class instead of the parent class

class SubCar:public Car {
};

int main() {
    Car car;
    SubCar c1;
    cout << "Brand: " << car.brand << endl;
    cout << "Model: " << car.model << endl << endl;

    cout << "Year of Production: " << c1.year << endl;
    cout << "Brand: " << c1.brand;
    
    return 0;
}