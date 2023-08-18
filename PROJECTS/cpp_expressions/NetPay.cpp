#include <iostream>

using namespace std;

int main() {

    int hourlyWage, hoursWorked, percentage;
    
    cout << "Enter your hourly wage (USD): ";
    cin >> hourlyWage;
    cout << "Enter number hours worked: ";
    cin >> hoursWorked;
    cout << "Enter withholding percentage: ";
    cin >> percentage;
    cout << endl;

    int net_weekly_pay = (hoursWorked * hourlyWage) - percentage/100;

    cout << "Net Weekly Pay: $" << net_weekly_pay;

    return 0;

}