#include<iostream>
using namespace std;

// Global variables
const int MAX_SPECIALIZATION = 21;
const int MAX_QUEUE = 5;

struct hospitalQueue {
	string names[MAX_QUEUE];
	int status[MAX_QUEUE], len, spec;

	hospitalQueue() { len = 0; spec = -1; } // default constructor // a must
	hospitalQueue(int Spec) { len = 0; spec = Spec; }

	void addEnd(string name, int st) {
		if (len == MAX_QUEUE) cout << "\nSorry we can't add more patients for to specialization\n";
		else names[len] = name, status[len] = st, len++;
	}
	void addFront(string name, int st) {
		if (len == MAX_QUEUE) cout << "\nSorry we can't add more patients for to specialization\n";
		else {
			// shift right
			for (int i = len - 1; i >= 0; i--) names[i + 1] = names[i], status[i + 1] = status[i];
			names[0] = name, status[0] = st, len++;
		}
	}
	void removeFront() {
		if (len == 0) cout << "No patients at the moment. Have rest, Dr\n";
		else {
			cout << names[0] << " please go with the Dr\n";
			// shift left
			for (int i = 1; i < len; i++) names[i - 1] = names[i], status[i - 1] = status[i];
			len--;
		}
	}
	void print() {
		cout << "There are " << len << " patients in specialization " << spec << "\n";
		for (int i = 0; i < len; i++) {
			cout << names[i] << " => ";
			if (status[i])cout << "urgent\n"; else cout << "regular\n";
		}
		cout << endl;
	}
};

struct hospitalSystem
{
	hospitalQueue queues[MAX_SPECIALIZATION];

	hospitalSystem() {for (int i = 1; i < MAX_SPECIALIZATION; i++) queues[i] = hospitalQueue(i);}

	void run() {
		while ("always") {
			int choice = menu();

			if (choice == 1)addPatient();
			else if (choice == 2)printPatients();
			else if (choice == 3)getNextPatient();
			else break;
		}
	}

	int menu() {
		int choice = -1;
		while (choice == -1) {
			cout << "\nEnter your choice:\n";
			cout << "1) Add new patient\n";
			cout << "2) Print all patients\n";
			cout << "3) Get next patient\n";
			cout << "4) Exit\n";

			cin >> choice;

			if (!(1 <= choice && choice <= 4)) {
				cout << "Invalid choice. Try again\n";
				choice = -1;	// keep loop working
			}
		}
		return choice;
	}

	void addPatient() {
		int spec, st; string name;

		cout << "Enter specialization, name, status: ";
		cin >> spec >> name >> st;

		if (st == 1)queues[spec].addFront(name, st);
		else queues[spec].addEnd(name, st);

	}

	void printPatients() {
		cout << "****************************\n";
		for (int spec = 1; spec < MAX_SPECIALIZATION; spec++) queues[spec].print();
	}

	void getNextPatient() {
		int spec;
		cout << "Enter specialization: ";
		cin >> spec;

		queues[spec].removeFront();

	}
};

int main() {
	hospitalSystem hospital = hospitalSystem();
	hospital.run();
	return 0;
}
// test case
/*
1
15 mostafa 0
1
15 asmaa 0
1
15 belal 1
2
1
15 ziad 1
2
1
15 safaa 0
1 15 ashraf
2
3
10
3
15
2
1
7 soha 1
2
1
15 amal 1
3
7
2
*/
