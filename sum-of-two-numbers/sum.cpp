#include <iostream>
using namespace std;

int main () {
	int x,y;
	
	cout << "Enter number 1: ";
	cin >> x;
	cout << "Enter number 2: ";
	cin >> y;
	
	int sum = x + y;
	cout << "The sum of "<<x<<" and "<<y<< " is "<< sum;
	
	return 0;
}