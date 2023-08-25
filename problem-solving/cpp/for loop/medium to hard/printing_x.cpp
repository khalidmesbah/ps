#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int n;
    cin >> n;

    for (int i = 0; i <= n * 2; i++)
    {
        for (int j = 0; j <= n; j++)
        {

            if (i == j || i == n - j)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    cout << "\n===========================\n";
    return 0;
}