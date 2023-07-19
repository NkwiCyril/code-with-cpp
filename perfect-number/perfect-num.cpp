#include <iostream>
#include <math.h>   // Header file for mathematical functions
using namespace std;

class Solution {
public:
    string isPerfectSquare(int num) {
        for (int i = 0; i <= 31; i++) {   // Iterate from 0 to 31
            if(pow(i,2) == num) {   // Check if i^2 equals to the given number
                return "true";   // If yes, return true
            }
        }
        return "false";   // If the loop completes without finding a perfect square, return false
    }
};

int main() {
    Solution solution;
    cout << solution.isPerfectSquare(4);   // Call the isPerfectSquare method with an argument 4 and print the result
    return 0;   // Return 0 to indicate successful program execution
}