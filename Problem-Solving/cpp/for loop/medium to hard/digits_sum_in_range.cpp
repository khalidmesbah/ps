#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int n, A, B, sum_of_nums_in_range{0}, sum_of_digits, ii;
    cin >> n >> A >> B;
    for (int i = 1; i <= n; i++)
    {
        sum_of_digits = 0, ii = i;
        while (ii)
            sum_of_digits += ii % 10,
                ii /= 10;
        if (A <= sum_of_digits && sum_of_digits <= B)
            sum_of_nums_in_range += i;
    }
    cout << sum_of_nums_in_range;

    cout << "\n===========================\n";
    return 0;
}