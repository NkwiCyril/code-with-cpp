#include <iostream>
#include <windows.h>
using namespace std;

class OldBase {
    public:
        void oldFunction() {
            cout << "Output anything";
        }
        string name;
};

class NewBase {
    public:
        void newFunction() {
            cout << "Also output anything here.";
        }
        int age;
};

// multiple inheritance initiated by the ChildBase
// hence it will get the properties of classes OldBase and NewBase
class ChildBase: public NewBase, public OldBase { 
};

int main() {
	ChildBase prop;
	
	prop.oldFunction();
	Sleep(1000);
	cout << endl;
	prop.newFunction();
	Sleep(1000);
	
	return 0;
}
