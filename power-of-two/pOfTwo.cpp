#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // This function checks if the given integer n is a power of two or not.
        // It does this by iterating through all possible powers of two that are less than or equal to n.
        // If it finds a power of two that is equal to n, then it returns true.
        // Otherwise, it returns false.
        for (int i = 0; i <= n; i++) {
            if (pow(2,i) == n) {
                return true;
            } 
        }
        return false;
    }
};

int main() {
    // Create an instance of the Solution class.
    Solution solution;
    
    // Call the isPowerOfTwo function on the integer 9 and print the result to the console.
    cout << solution.isPowerOfTwo(9);
    
    return 0;
}