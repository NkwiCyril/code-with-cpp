#include <iostream>
using namespace std;

int sum(int k) {
    if (k < 0) {
        return 0;
    } else return (k + sum(k - 1));
}

int main() {
    cout << sum(2);
    return 0;
}