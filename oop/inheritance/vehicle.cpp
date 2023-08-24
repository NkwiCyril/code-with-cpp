
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
        string model = "Aventador";
};

int main() {
    Car car;
    cout << "Brand: " << car.brand << endl;
    cout << "Model: " << car.model;

    return 0;
}