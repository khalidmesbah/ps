#include <iostream>
#include<string>
using namespace std;

struct Employee
{
	string name;
	int age;
	double salary;
	char gender;
};

struct companySystem
{
	int numberOfEmployees = 0;

	Employee employees[100];

	void run() {
		while ("always") {
			int choice = menu();

			if (choice == 1) readEmployee();
			else if (choice == 2) printEmployees();
			else if (choice == 3) deleteByAge();
			else if (choice == 4) updateSalaryByName();
			else break;
		}
	}

	int menu() {
		int choice = -1;
		while (choice == -1) {
			cout << "\ntype choice from 1 to 5: \n";
			cout << "1) read Employee: \n";
			cout << "2) print Employees: \n";
			cout << "3) delete By Age: \n";
			cout << "4) update Salary By Name: \n";
			cout << "5) Exit: \n";

			cin >> choice;

			if (!(1 <= choice && choice <= 5)) {
				cout << "Invalid choice. Try again\n";
				choice = -1;	// keep loop working
			}
		}
		return choice;
	}

	void readEmployee() {
		cout << "type name > age > salary > gender" << endl;
		cin >> employees[numberOfEmployees].name >> employees[numberOfEmployees].age >> employees[numberOfEmployees].salary >> employees[numberOfEmployees].gender;
		numberOfEmployees++;
	}

	void printEmployees() {
		cout << endl;
		for (int i = 0; i < numberOfEmployees; i++) {
			if (employees[i].age > 0) cout << "Employee Number " << i+1 << ": " << employees[i].name << " " << employees[i].age << " " << employees[i].salary << " " << employees[i].gender << endl;
		}
	}

	void deleteByAge() {
		int age;
		cout << "delete the employee with age: ";
		cin >> age;
		for (int i = 0; i < numberOfEmployees; i++) if (employees[i].age == age) employees[i].age = 0;
	}

	void updateSalaryByName() {
		cout << "type the name of the employee and it's new salary: \n";
		string name;
		int salary;
		cin >> name >> salary;

		bool is_found = 0;
		for (int i = 0; i < numberOfEmployees; i++) {
			if (employees[i].age != -1 && employees[i].name == name) {
				is_found = 1;
				employees[i].salary= salary;
				break;
			}
		}
		if (!is_found)cout << "no employee with this name\n";
	}

};

int main() {
	companySystem sys = companySystem();
	sys.run();
	return 0;
}
