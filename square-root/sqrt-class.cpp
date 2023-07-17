#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        return pow(x, 0.5);
    }
};

int main() {
    
	Solution solution;
	
	int num;
	cout << "Input a number: ";
	cin >> num;
	cout << "Square root of the number: ";
	cout << solution.mySqrt(num);
	
	return 0;
}
