// This code creates a struct called `Student` and then prompts the user to enter their name, age, major, and school initials.
//
// The `name`, `age`, `major`, and `schoolInit` attributes are all initialized with the data provided by the user.

#include <iostream>
#include <string>
using namespace std;

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

int main() {
  // Create a `Student` object called `me`.
  Student me;

  // Prompt the user to enter their name.
  cout << "Enter name: " << endl;
  cin >> me.name;

  // Prompt the user to enter their age.
  cout << "Enter age: " << endl;
  cin >> me.age;

  // Prompt the user to enter their major.
  cout << "Enter major: " << endl;
  cin >> me.major;

  // Prompt the user to enter their school initials.
  cout << "Enter school: " << endl;
  cin >> me.schoolInit;

  // Print the student's information to the console.
  cout << "Name: " << me.name << endl;
  cout << "Age: " << me.age << endl;
  cout << "Major: " << me.major << endl;
  cout << "College: " << me.schoolInit << endl;

  // Return 0 to indicate that the program has completed successfully.
  return 0;
}
