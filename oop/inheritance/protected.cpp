#include <iostream>

using namespace std;

class Employee {
	protected:
		int salary;
	
};

class Programmer: public Employee {
	public:
		int bonus;
		void setSalary(int s) {
			salary = s;
		}
		
		int getSalary() {
			return salary;
		}
};


int main() {
	Programmer p1;
	
	p1.setSalary(5000);
	p1.bonus = 200;
	
	cout << "Programmer's salary: " << p1.getSalary() << endl;
	cout << "Bonus: " << p1.bonus;
	
	return 0;
}

