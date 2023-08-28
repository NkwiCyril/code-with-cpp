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

    Employee assistant;
    
    int num, hour;
    
    cout << "Enter assistant number: ";
    cin >> num;
    assistant.setIdNum(num);
    cout << "Enter assistant hourly rate: ";
    cin >> hour;
    assistant.setHourlyRate(hour);
    cout << endl << endl;
    
    cout << "Details Input" << endl;
    cout << "Employee Number: " << assistant.getIdNum() << endl;
    cout << "Employee Hourly Rate: " << assistant.getHourlyRate();

	return 0;
}