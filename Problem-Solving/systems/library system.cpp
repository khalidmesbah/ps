#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

struct book
{
	string name;
	int id;
	int quantity;

	void addBook() {
		cout << "Enter the name of the book, the id, the quantity: \n";
		cin >> name >> id >> quantity;
	}
	void printBook() {
		cout << name << " " << id << " " << quantity << endl;
	}
};

struct user
{
	string name;
	int id;

	void addUser() {
		cout << "Enter the name of the user, the id: \n";
		cin >> name >> id;
	}

	void printUser() {
		cout << name << " " << id << endl;
	}
};

struct librarySystem
{
	int numOfBooks = 0;
	int numOfUsers = 0;

	book books[100];
	user users[100];

	void run() {
		while ("always") {
			int choice = menu();

			if (choice == 1) addBook();
			else if (choice == 2) addUser();
			else if (choice == 3) printBooks();
			else if (choice == 4) printUsers();
			else if (choice == 5) listBooksWithPrefix();
			else break;
		}
	}

	int menu() {
		int choice = -1;
		while (choice == -1) {
			cout << "type choice from 1 to 5: \n";
			cout << "1) Add a book: \n";
			cout << "2) Add a user: \n";
			cout << "3) Print the books: \n";
			cout << "4) print the Users: \n";
			cout << "5) list the books by prefix: \n";
			cout << "6) Exit: \n";

			cin >> choice;

			if (!(1 <= choice && choice <= 6)) {
				cout << "Invalid choice. Try again\n";
				choice = -1;	// keep loop working
			}
		}
		return choice;
	}

	void addBook() {
		books[numOfBooks].addBook();
		numOfBooks++;
	}

	void addUser() {
		users[numOfUsers].addUser();
		numOfUsers++;
	}

	void printBooks() {
		cout << "\n\nprinting...... the books-----\n\n";
		for (int i = 0; i < numOfBooks; i++) {
			books[i].printBook();
		}
		cout << endl;
	}

	void printUsers() {
		cout << "\n\nprinting...... the users-----\n\n";
		for (int i = 0; i < numOfUsers; i++) {
			users[i].printUser();
		}
		cout << endl;
	}

	bool startsWithPrefix(string book, string prefix) {
		bool startsWith = 1;
		if (prefix.size() <= book.size()) {
			for (int i = 0; i < prefix.size(); i++) {
				startsWith *= book[i] == prefix[i];
				if (startsWith == 0) return 0;
			}
			if (startsWith)return 1;
		}
		else return 0;
	}

	void listBooksWithPrefix() {
		string prefix;
		int numOfListedBooks = 0;
		cout << "Enter the prefix: ";
		cin >> prefix;
		cout << endl;
		for (int i = 0; i < numOfBooks; i++) {
			if (startsWithPrefix(books[i].name, prefix)) cout << books[i].name << endl, numOfListedBooks++;
		}
		if (numOfListedBooks++ == 0) cout<<"sorry, there are no books with such a prefix\n";
		cout << endl;

	}


};



int main() {
	librarySystem sys = librarySystem();
	sys.run();

	return 0;
}

/*
2 khaled 1
2 osama 2
2 hager 2
2 sara 5
1 quran 1 10000
1 koko 2 2323
1 kj 434 323
1 kolem_allah 43 32
1 mba 32 87
*/
