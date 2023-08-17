#include <iostream>

using namespace std;

struct Fraction {
	int numerator;
	int denominator;
};

int main() {
	Fraction improper;
	
	int num = improper.numerator;
	int denom = improper.denominator;
	
	cout << "Enter the numerator: ";
	cin >> num;
	cout << "Enter the denominator: ";
	cin >> denom;

	if (num <= denom) {
		cout << "Fraction Not Improper. numerator !> denominator" << "\n";
	} else {
		cout << "Improper Fraction: ";
		cout << improper.numerator << "/" << improper.denominator;
	}
	
	return 0;
}