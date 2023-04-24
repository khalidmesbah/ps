#include <iostream>
using namespace std;

void d(int n)
{
    if (n)
    {
        d(n / 10);
        cout << n % 10;
    }
}

void dd(int n)
{
    if (n)
    {
        cout << n % 10;
        dd(n / 10);
    }
}

int main()
{
    d(123456);
    cout << endl;
    dd(123456);
    return 0;
}
