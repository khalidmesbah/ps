#include <iostream>
using namespace std;

int main()
{

    int n, x;
    cin >> n;
    int firstOccur[501]{0};
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (!firstOccur[x])
            cout << x << " ";
        firstOccur[x] = 1;
    }

    return 0;
}
/*

13
1 5 5 2 5 7 2 3 3 3 5 2 7

*/