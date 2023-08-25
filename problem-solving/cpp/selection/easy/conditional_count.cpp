#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    while (1)
    {
        int x, a, b, c, d, e;
        cin >> x >> a >> b >> c >> d >> e;
        int nums_less_than_or_equal_to_x{0};
        nums_less_than_or_equal_to_x += (a <= x);
        nums_less_than_or_equal_to_x += (b <= x);
        nums_less_than_or_equal_to_x += (c <= x);
        nums_less_than_or_equal_to_x += (d <= x);
        nums_less_than_or_equal_to_x += (e <= x);

        cout << "numbers <= x: " << nums_less_than_or_equal_to_x << endl
             << "numbers > x: " << 5 - nums_less_than_or_equal_to_x;
    }

    cout << "\n===========================\n";
    return 0;
}
