#include <iostream>

using namespace std;

int main() {

    int hourlyWage;

    cout << "Input your hourly wage: ";
    cin >> hourlyWage;

    int weeklyPay = 40 /*40 hours*/ * hourlyWage;

    cout << "Standard Weekly pay: $" << weeklyPay; // pay per week

    return 0;

}