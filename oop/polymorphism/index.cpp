#include <iostream>

using namespace std;

// Polymorphism means "many forms", 
// and it occurs when we have many classes that are related to each other by inheritance.
// it allows us perform a single action in different ways

class Animal{
	public:
		void animalSound() {
			cout << "Different animals make different sounds.\n";
		}
};

class Dog:public Animal {
	public:
		void animalSound() {
			cout << "woof! woof!!\n";
		}
};

class Cat:public Animal {
	public:
		void animalSound() {
			cout << "meow! meow!\n";
		}
};

int main() {
	Animal animal;
	Dog dog;
	Cat cat;
	
	animal.animalSound();
	dog.animalSound();
	cat.animalSound();
	
	return 0;
}

