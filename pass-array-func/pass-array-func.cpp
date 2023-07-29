#include <iostream>
#include <string.h>
using namespace std;

// This function takes an array of numbers as input and multiplies each number by 2.
void arrayFunc(int myNums[10]) {
  // This variable will be used to iterate through the array.
  int i = 0;

  // Print out a header.
  cout << "Numbers when multiplied by 2: " << endl;

  // Iterate through the array and multiply each number by 2.
  for (i; i < 10; i++) {
    // Print out the number at the current index, multiplied by 2.
    cout << "At Index " << i << ": "<< myNums[i]*2 << endl;
  }
}

int main() {
  // Create an array of numbers.
  int nums[10] = {1,2,3,4,5,6,7,8,9,10};

  // Call the `arrayFunc` function to multiply the numbers in the array by 2.
  arrayFunc(nums);

  // Return 0 to indicate that the program ran successfully.
  return 0;
}
