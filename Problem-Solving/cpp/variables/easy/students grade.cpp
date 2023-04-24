#include <iostream>
using namespace std;

int main()
{

    string name1;
    cout << "what is student 1 name: ";
    cin >> name1;

    int id1;
    cout << "his id: ";
    cin >> id1;

    double grade1;
    cout << "his math exam grade: ";
    cin >> grade1;

    string name2;
    cout << "what is student 2 name: ";
    cin >> name2;

    int id2;
    cout << "his id: ";
    cin >> id2;

    double grade2;
    cout << "his math exam grade: ";
    cin >> grade2;

    cout << "---------------\n";
    cout << "students grades in math" << endl
         << name1 << " (with id " << id1 << ") got grade: " << grade1 << endl
         << name2 << " (with id " << id2 << ") got grade: " << grade2 << endl
         <<"Average grade is "<<(grade1 + grade2) / 2.0<<"\n";


    return 0;
}
