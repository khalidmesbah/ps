#include <iostream>
using namespace std;

int main()
{

    int n, x, occurance[10]{0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
            occurance[0]++;

        while (x)
            occurance[x % 10]++,
                x /= 10;
    }

    for (int i = 0; i < 10; i++)
        cout << i << " " << occurance[i] << endl;

    return 0;
}
/*

13
1 5 5 2 5 7 2 3 3 3 5 2 7

*/