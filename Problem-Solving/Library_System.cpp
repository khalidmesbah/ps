#include <iostream>
using namespace std;

struct Book
{
    int id;
    string name;
    int quantitiy;
};

int n{0};
struct User
{
    int id = ++n;

    string name;

    Book borrowed_books[100];

    User()
    {
        cout << n << " " << id << endl;
        name = "unknown";
    };

    User(string _name)
    {
        name = _name;
    };

    void borrow_a_book()
    {
        return;
    };

    void return_a_book()
    {
        return;
    }
};

struct hospital_system
{
    Book books[100];
    User users[100];

    hospital_system()
    {
        for (int i = 0; i < 100; ++i)
            users[i] = User();
    }

    void run()
    {
        while (true)
        {
            int choice = menu();
        }
    }

    int menu()
    {
        int choice = -1;
        while (choice == -1)
        {
            cout << "\nLibrary Menu:";
            cout << "\n1) Add a book";
            cout << "\n2) Search for a book by prefix";
            cout << "\n3) Print who borrowed a book by name";
            cout << "\n4) Print a libirary by it's id";
            cout << "\n5) Print a libirary by it's name";
            cout << "\n6) Add a user";
            cout << "\n7) User borrow a book";
            cout << "\n8) User return a book";
            cout << "\n9) Print the users";
            cout << "\n10) Exit\n";
            cout << "\nEnter your menu choice from 1 to 10:-\n";

            cin >> choice;

            if (!(1 <= choice && choice <= 4))
            {
                cout << "Invalid choice. Try again\n";
                choice = -1; // loop keep working
            }
        }
        return choice;
    }

    void print()
    {
        for (int i = 0; i < 100; i++)
        {
            cout << users[i].name << " " << users[i].id << endl;
        }
    };
};

int main()
{
    hospital_system s = hospital_system();
    s.print();
    return 0;
}