#include <iostream>
using namespace std;

int main () {
	int x,y;
	
	cout << "Enter number 1: "; //prompting the user to input the first number
	cin >> x;
	cout << "Enter number 2: "; //prompting the user to input the first number
	cin >> y;
	
	int sum = x + y; // storing the sum of the two numbers in var 'sum'
	cout << "The sum of "<<x<<" and "<<y<< " is "<< sum;
	
	return 0;
}