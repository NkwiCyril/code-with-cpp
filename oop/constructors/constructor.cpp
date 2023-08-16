// What is a constructor?
// Constructors are special cpp methods that are called automatically when an object of a class is created.
// To create a constructor, use the same name as the class, followed by parentheses ():

#include <iostream>
using namespace std;

class myClass{
    public:
        myClass() {
            cout << "New object created";
        }
};

int main() {
    myClass newClass;

    return 0;
}