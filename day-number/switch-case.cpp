// This program prints the name of the day of the week given the day number.

#include <iostream>
#include <string>
using namespace std;

int main () {
  // Declare a variable to store the day number.
  int day;

  // Prompt the user to enter the day number.
  cout << "Enter the number of a day like 1 for Mon...: ";
  cin >> day;

  // Use a switch statement to print the corresponding day name.
  switch(day) {
    // Case 1: Print "Monday".
    case 1: 
      cout << "Monday";
      break;
    // Case 2: Print "Tuesday".
    case 2: 
      cout << "Tuesday";
      break;
    // Case 3: Print "Wednesday".
    case 3: 
      cout << "Wednesday";
      break;
    // Case 4: Print "Thursday".
    case 4: 
      cout << "Thursday";
      break;
    // Case 5: Print "Friday".
    case 5: 
      cout << "Friday";
      break;
    // Case 6: Print "Saturday".
    case 6: 
      cout << "Saturday";
      break;
    // Case 7: Print "Sunday".
    case 7: 
      cout << "Sunday";
      break;
    // Default: Print "Invalid day number".
    default: 
      cout << "Invalid day number";
  }

  // Return 0 to indicate success.
  return 0;
}
