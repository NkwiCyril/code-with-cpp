#include <iostream>
using namespace std;

class carSpeed{
	public:
		int speed(int maxSpeed);
};

int carSpeed::speed(int maxSpeed) {
	return maxSpeed;
}

int main() {
	carSpeed maxSpeed;
	cout << maxSpeed.speed(200);
	
	return 0;
}