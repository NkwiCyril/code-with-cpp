#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <process.h>
#include <fstream.h>
#include <ctype.h>

using namespace std;

class Menu {
	
	private:
		void editRecords();
		void report();
		void room();
		void customer();
		
	public:
		void overview();
		void mainMenu();
		void enterPassword();
	
};

class Room {
	
	private:
		int recordNo(int);
		void displayRecord(int);
		int roomNo;
		char roomCode[5], status;
		float tariff;
	
	public:
		void add();
		void modify();
		void deletion();
		void displayRoomRecord();
		void displayList();
		int roomFound(int);
		void changeStatus(int, char);
        char roomStatus(int);
        float yetData(int); 
};

class Customer {
    private:
        int recordNo(int);
        void displayRecord(int);
        void deleteRecord(int);
        int roomNo;
        char name[21], phone[9];
        float advance, misc, roomSrv;

    public:
        void add();
        void modify();
        void deletion();
        void displayList();
        void displayCustomerRecord(int);

};

int main() {
	
}
