#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int T;
    cin >> T;

    while (T)
    {
        int n, sum;
        cin >> n;
        sum = n * (n + 1) / 2;
        cout << sum;
        T--;
    }

    cout << "\n===========================\n";
    return 0;
}
