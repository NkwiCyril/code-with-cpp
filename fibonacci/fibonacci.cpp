#include <iostream>
using namespace std;

unsigned int fib(unsigned int n) {
	if (n == 0 ||n == 1) {
		return n;
	} else return fib(n - 1) + fib(n - 2);
}
int main () {
	int n, i = 0;
	
	cout << "Enter the number of terms of the series: ";
	cin >> n;
	cout << "Fibonacci Series: ";
	while (i < n) {
		cout << fib(i) << " ";
    	i++;
	}
}