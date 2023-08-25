#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int n = 60;

    while (n > 5)
    {
        if (n == 7)
        {
            n = 70;
            continue;
        }

        if (n % 2 == 0)     
            n /= 2;
        else
            n = (n - 1) / 2;

        if (n == 8)
            break;
    }
    cout << n;

    cout << "\n===========================\n";
    return 0;
}
