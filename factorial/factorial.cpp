#include <iostream>
using namespace std;

float factorial(int n) {
	if (n == 0) { // 0! = 1
		return 1;
	} else return n * factorial(n - 1); // 5! = 5 * 4! and so on 
}

int main() {
	int number;
	cout << "Input a number to find its factorial: ";
	cin >> number;
	cout << "The factorial of " << number << " is "<< factorial(number);
}