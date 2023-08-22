#include <iostream>

using namespace std;

int main() {
    int New[5];
    int old[5] = {1,3,4,5,2};

    int len = sizeof(old)/sizeof(int);
    for (int i = 0; i < len; i++) {
        New[i] = old[i];
    }

    cout << New[0] << endl;
    cout << old[0] ;
    return 0;
}