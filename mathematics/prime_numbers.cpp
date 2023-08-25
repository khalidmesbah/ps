#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";
    while ("alive")
    {
        int n;
        cin >> n;
        bool is_prime = 1;
        if (n <= 1)
            is_prime = 0;
        else
            for (int i = 2; i < n; i++)
                if (n % i == 0)
                {
                    is_prime = 0;
                    break;
                }

        (is_prime) ? cout << "Yes\n" : cout << "NO\n";
    }
    cout << "\n===========================\n";
    return 0;
}
