#include <iostream>

class myMethod {
    public:
    void newMethod() {
        std::cout << "This is my first method.";
    }
};

int main() {
    myMethod objMethod;
    objMethod.newMethod();

    return 0;
}