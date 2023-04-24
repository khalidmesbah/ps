#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    while (1)
    {
        int n;
        char c;
        cin >> n >> c;

        while (n--)
            cout << c;
    }

    cout << "\n===========================\n";
    return 0;
}
