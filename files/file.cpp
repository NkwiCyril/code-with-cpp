#include <iostream>
#include <fstream>

using namespace std;

int main() {

    string fileName;

    ifstream MyReadFile("file.txt");

    while (getline (MyReadFile, fileName)) {
        cout << fileName << endl;
    }

    MyReadFile.close();

    return 0;
}