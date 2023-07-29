#include <iostream>
#include <string.h>

using namespace std;
void keyFinder(int key, int keys[]) {
    for (int i = 0; i < 20; i++) {
        if (i == key) {
            cout << "Key found in the array." << endl;
        } else {
            cout << "Key not found." << endl;
        }
    }
}

int main() {
    int key;
    int keys[20] = {1,2,3,4,5,67,8,9,7,5,3,223,4};
    cout << "Input your key number: " << endl;
    cin >> key;

    keyFinder(key,keys);
    return 0;

}