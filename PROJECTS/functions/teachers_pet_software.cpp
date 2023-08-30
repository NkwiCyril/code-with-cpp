#include <iostream>

using namespace std;

class Fraction{
	
	private:
		int wholeNumber;
		int numerator;
		int denominator;
	
	public:
		static const char slash = '/';
		void enterFractionValue();
		void displayFraction();
};

void Fraction::enterFractionValue() {
	cout << "Numerator: ";
	cin >> numerator;
	cout << "Denominator: ";
	cin >> denominator;
}

void Fraction::displayFraction() {
	cout << numerator << slash << denominator;
}

int main() { 
	
	Fraction fraction;
	
	fraction.enterFractionValue();
	fraction.displayFraction();
	
	return 0;	
}