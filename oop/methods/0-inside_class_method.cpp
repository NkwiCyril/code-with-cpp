#include <iostream>

class myMethod {
    public:
    // defining the method/function inside the class myMethod
    void newMethod() {
        std::cout << "This is my first method.";
    }
};

int main() {
    myMethod objMethod;
    objMethod.newMethod();

    return 0;
}