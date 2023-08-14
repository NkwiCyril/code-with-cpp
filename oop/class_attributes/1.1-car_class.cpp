#include <iostream>
#include <string>

class car {
public:
    std::string brand;
    std::string model;
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

    std::cout << "\tCar1" << std::endl;
    std::cout << "Car Brand: " << car1.brand << std::endl;
    std::cout << "Car Model: " << car1.model << std::endl;
    std::cout << "Year of Production: " << car1.year << std::endl << std::endl;

    std::cout << "\tCar2" << std::endl;
    std::cout << "Car Brand: " << car2.brand << std::endl;
    std::cout << "Car Model: " << car2.model << std::endl;
    std::cout << "Year of Production: " << car2.year;

    return 0;
}