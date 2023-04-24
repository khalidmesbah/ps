#include <iostream>
using namespace std;

int main()
{
    double n1, n2;
    char sign;
    cin >> n1 >> sign >> n2;
    if (sign == '+')
    {
        cout << n1 + n2;
    }
    else if (sign == '-')
    {
        cout << n1 - n2;
    }
    else if (sign == '/')
    {
        cout << n1 / n2;
    }
    else if (sign == '*')
    {
        cout << n1 * n2;
    }

    return 0;
}
