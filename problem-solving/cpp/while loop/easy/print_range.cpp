#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    while (1)
    {
        int a, b;
        cin >> a >> b;

        while (a <= b)
            cout << a++ << endl;
    }

    cout << "\n===========================\n";
    return 0;
}
