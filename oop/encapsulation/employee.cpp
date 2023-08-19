#include <iostream>

using namespace std;

class Employee {
	private:
		int salary;
	
	public:
		// setter to set the value of a private attribute
		void setSalary(int s) {
			salary = s;
		}
		// getter to get that set value
		int getSalary() {
			return salary;
		}
};

int main() {
	Employee emp1;
	
	emp1.setSalary(5000000);
	cout << "Salary of emp1: " << emp1.getSalary(); << "XAF";
	
	return 0;
}