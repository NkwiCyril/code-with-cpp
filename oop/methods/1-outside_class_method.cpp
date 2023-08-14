// In order to define a funtion outside the class, we would need to declare it inside the class then define it
// outside the class.
// Outside the class we follow the following syntax:
//             returnType <className>::<funtionName>()
// Above, after the return type, we have the class name followed by the scope resolution operator and then the name
// of the fucntion

#include <iostream>

class myMethod{
    public:
    void newMethod();
};

void myMethod::newMethod() {
    std::cout << "Hello, World!";
}

int main() {
    myMethod objMethod;
    objMethod.newMethod(); // call the method

    return 0;
}