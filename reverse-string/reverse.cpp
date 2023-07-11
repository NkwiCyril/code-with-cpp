#include <iostream>
using namespace std;

void reverse(string String) {
	int len = String.length(); // get the length of the string
	
	for (int i = len;i >= 0; i--) { // loop through the string from the last index
		cout << String[i]; // print out the the values of the chars of the string as I access them
	}
}

int main () {
    string String;
    cout << "Enter string you wish to reverse: ";
    getline(cin, String);
	reverse(String);
    
	return 0;
}