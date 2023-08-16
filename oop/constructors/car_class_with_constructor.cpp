#include <iostream>

using namespace std;

class car{
    public:
        string brand;
        string model;
        int year;

        car(string x, string y, int z) {
            brand = x;
            model = y;
            year = z;
            
            cout << "Car Brand: " << x << endl;
            cout << "Car Model: " << y << endl;
            cout << "Year of Production: " << z ;
        }
};

int main() {
    car Car1("Mercedes-Benz","G-Wagon",2019);
	    
    return 0;
}