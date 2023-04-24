#include <iostream>
using namespace std;

int main()
{
    int t = 4;
    for (; t++; t++)
    {
        if (t % 2 == 0)
            continue;
        break;
    }
    cout << t;

    return 0;
}
