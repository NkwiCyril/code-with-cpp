#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    string isPerfectSquare(int num) {
        for (int i = 0; i <= 31; i++) {
            if(pow(i,2) == num) {
                return "true";
            }
        }
        return "false";
    }
};

int main() {
	Solution solution;
	
	cout << solution.isPerfectSquare(4);
	return 0;
	
}