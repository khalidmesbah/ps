#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << n % 10;
    else
    {
        if (n < 1000)
            cout << n % 100;
        else if (n > 1000 && n < 1000000)
            cout << n % 10000;
        else
            cout << -n;
    }

    return 0;
}
