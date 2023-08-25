#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int n;
    cin >> n;
    bool first_prime{1}, is_prime;
    for (int i = 2; i < n; i++)
    {
        is_prime = 1;
        for (int j = 2; j < i; j++)
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }

        if (is_prime)
            if (first_prime)
                cout << i, first_prime = 0;
            else
                cout << "," << i;
    }

    cout << "\n===========================\n";
    return 0;
}