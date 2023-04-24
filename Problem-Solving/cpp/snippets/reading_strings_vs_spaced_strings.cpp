#include <iostream>
using namespace std;

int main()
{

    string name1, name2;
    cin >> name1;        // works for non-spaced strings
    getline(cin, name2); // works for spaced strings only
    cout << name1 << " " << name2 << "\n";

    return 0;
}