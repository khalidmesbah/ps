#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 != 0 && b % 2 != 0)
            cout << a * b;
        else if (a % 2 == 0 && b % 2 == 0)
            cout << a / b;
        else if (a % 2 != 0 && b % 2 == 0)
            cout << a + b;
        else
            cout << a - b;
    }

    return 0;
}
