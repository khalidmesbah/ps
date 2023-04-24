#include <iostream>
using namespace std;

void sequence(int n)
{
    if (n == 1)
    {
        cout << n;
        return;
    }

    if (n % 2 == 0)
    {
        cout << n << " ";
        sequence(n / 2);
    }
    else
    {
        cout << n << " ";
        sequence(3 * n + 1);
    }
}

int main()
{
    sequence(6);
    return 0;
}
