#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int x;
    cin >> x;
    while (x >= 1)
    {
        if (x % 3 == 0)
            cout << x << " ";
        x--;
    }

    cout << "\n===========================\n";
    return 0;
}
