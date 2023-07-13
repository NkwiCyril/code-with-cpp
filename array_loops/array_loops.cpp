// This code prints the car brands in an array.

#include <iostream>
using namespace std;

int main() {
  // Declare an array of strings called `car`.
  string car[] = {"benz", "toyota", "cadillac", "tesla", "porsche"};

  // Calculate the size of the array and store the result in the variable `len`.
  int len = sizeof(car) / sizeof(string);

  // Use a for loop to iterate through the `car` array.
  for (int i = 0; i < len; i++) {
    // Print the index of the current element and the value of the current element.
    cout << "Car number " << i << " is " << car[i] << endl;
  }

  // Return 0 to indicate that the program has terminated successfully.
  return 0;
}
