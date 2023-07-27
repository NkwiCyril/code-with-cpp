#include <iostream>

using namespace std;

void swapFunc(int &x, int &y) {
	 	int z = x; 
		x = y;
		y = z;
}

int main() {
	int num1 = 23;
	int num2 = 35;
	
	cout << "Before swap: " ;
	cout << num1 <<", "<< num2 << endl; //print out the original order of ther numbers
	
	swapFunc(num1, num2); // function to swap the position and location of the two numbers
	
	cout << "After swap: ";
	cout << num1 <<", "<< num2; //print out the new order once swapped
	
	return 0;
}