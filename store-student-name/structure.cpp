// This code creates a struct called `Student` and then initializes it with the following data:
//
// * Name: Nkwi Cyril
// * Age: 20
// * Major: Computer Engineering, SE
// * School Init: Faculty of Engineering and Technology

#include <iostream>
#include <string>
using namespace std;

// This struct defines a student's information.
struct Student {
  // The `name` attribute stores the student's name.
  string name;
  // The `age` attribute stores the student's age.
  int age;
  // The `major` attribute stores the student's major.
  string major;
  // The `schoolInit` attribute stores the student's school initials.
  string schoolInit;
};

// This function creates a `Student` object called `me` and then initializes it with the data provided in the code.
int main() {
  // Create a `Student` object called `me`.
  Student me;

  // Initialize the `me` object with the data provided in the code.
  me.name = "Nkwi Cyril";
  me.age = 20;
  me.major = "Computer Engineering, SE";
  me.schoolInit = "Faculty of Engineering and Technology";

  // Print the student's information to the console.
  cout << "Name: " << me.name << endl;
  cout << "Age: " << me.age << endl;
  cout << "Major: " << me.major << endl;
  cout << "College: " << me.schoolInit << endl;

  // Return 0 to indicate that the program has completed successfully.
  return 0;
}
