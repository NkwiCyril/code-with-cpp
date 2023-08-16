#include <iostream>

using namespace std;

class car{
    public:
        string name;
        string brand;
        string model;
        int year;

        car(string w, string x, string y, int z);
};

car::car(string w, string x, string y, int z) {
    name = w;
    brand = x;
    model = y;
    year = z;

    cout << "\t" << name << endl;
    cout << "Car Brand: " << x << endl;
    cout << "Car Model: " << y << endl;
    cout << "Year of Production: " << z << "\n\n";
}

int main() {
    car Car1("Car1","Mercedes-Benz","G-Wagon",2019);
    car Car2("Car2", "Toyota", "Tacoma", 2017);
	    
    return 0;
}