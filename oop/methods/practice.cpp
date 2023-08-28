#include <iostream>

using namespace std;

class Employee{
    private:
        int idNum;
        double hourlyRate;
    public:
        void setIdNum(const int id);
        void setHourlyRate(const double rate);

        int getIdNum();
        double getHourlyRate();
};

void Employee::setIdNum(const int id) {
    idNum = id;
}

void Employee::setHourlyRate(const double rate) {
    hourlyRate = rate;
}

int Employee::getIdNum() {
    return idNum;
}

double Employee::getHourlyRate() {
    return hourlyRate;
}


int main() {

    Employee employee;
    
    int num, hour;
    
    cout << "Enter employee number: ";
    cin >> num;
    employee.setIdNum(num);
    cout << "Enter employee hourly rate: ";
    cin >> hour;
    employee.setHourlyRate(hour);
    cout << endl << endl;
    
    cout << "Details Input" << endl;
    cout << "Employee Number: " << employee.getIdNum() << endl;
    cout << "Employee Hourly Rate: " << employee.getHourlyRate();

	return 0;
}