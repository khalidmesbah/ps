#include <iostream>
using namespace std;

int main()
{

    int a, b, c, mini;
    cin >> a >> b >> c;

    mini = a;

    if (mini > b)
        mini = b;
    if (mini > c)
        mini = c;

    cout << mini;

    return 0;
}
