#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n < 10000)
        {
            cout << "this is a small number";
        }
        else
        {
            int sum = n % 10 + n / 10 % 10 + n / 100 % 10;
            if (sum % 2 != 0)
                cout << "this is a great number";
            else
            {
                if (n % 10 != 0 || n / 10 % 10 != 0 || n / 100 % 10 != 0)
                    cout << "this is a good number";
                else
                    cout << "this is a bad number";
            }
        }
    }
    return 0;
}
