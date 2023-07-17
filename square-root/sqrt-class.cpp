// This program calculates the square root of a number.

#include <iostream>
#include <math.h>
using namespace std;

// This class defines a function to calculate the square root of a number.
class Solution {
public:
    // This function takes an integer as input and returns the square root of the input.
    int mySqrt(int x) {
        // This line uses the pow() function to calculate the square root of the input number.
        return pow(x, 0.5);
    }
};

// This is the main function of the program.
int main() {
    // Create an object of the Solution class.
    Solution solution;

    // Prompt the user to enter a number.
    int num;
    cout << "Input a number: ";
    cin >> num;

    // Call the mySqrt() function on the solution object, passing the input number as an argument.
    cout << "Square root of the number: ";
    cout << solution.mySqrt(num);

    // Return 0 to indicate that the program has terminated successfully.
    return 0;
}
