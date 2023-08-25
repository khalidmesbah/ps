#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    for (;; cout << "hello\n")
        ;

    // same as
    /* while (true)
        cout << "hello\n"; */

    cout << "\n===========================\n";
    return 0;
}