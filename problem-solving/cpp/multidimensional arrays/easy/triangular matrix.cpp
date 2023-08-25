#include <iostream>
using namespace std;

int main()
{
    int n, val, lower_sum{0}, upper_sum{0};
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> val;
            if (i <= j)
                lower_sum += val;
            if (i >= j)
                upper_sum += val;
        }

    cout << upper_sum << endl
         << lower_sum << endl;

    return 0;
}