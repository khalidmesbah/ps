#include <iostream>
using namespace std;

int main()
{
    string str = "abc";

    str[0] += 'A' - 'a';
    str[1] += 'A' - 'a';
    str[2] += 'A' - 'a';

    cout << str << "\n";

    cout << (int)'A' << "\n";
    cout << (int)'a' << "\n";
    cout << (int)'b' << "\n";
    cout << (int)'c' << "\n";

    return 0;
}
