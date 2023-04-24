#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        cout << "\n===========================\n";

        int n, rn{0}, ld;
        cin >> n;
        while (n)
            rn = rn * 10 + n % 10, n /= 10;
        cout << rn;
    }
    return 0;
}