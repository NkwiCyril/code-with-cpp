#include <iostream>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
    MyClass obj;

    obj.myNum = 20;
    obj.myString = "Nkwi";

    cout << obj.myNum << endl;
    cout << obj.myString;

    return 0;
}