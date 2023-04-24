#include <iostream>
using namespace std;

int main()
{

    // method 1
    cout << "method 1 using string data type:-\n";
    string name1;
    getline(cin, name1);
    cout << name1;

    cout << "\n";

    cout << "method 2 using char data type:-\n";
    // method 2
    char name2[50];
    cin.getline(name2, 50);
    cout << name2;

    return 0;
}
