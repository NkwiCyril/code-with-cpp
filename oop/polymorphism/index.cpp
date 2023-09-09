#include <iostream>

using namespace std;

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

