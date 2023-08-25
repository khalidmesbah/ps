#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    while (1)
    {
        int n, s{0};
        cin >> n;
        while (s <= n)
        {
            if (s % 8 == 0 || s % 3 == 0 && s % 4 == 0)
                cout << s << " ";
            s++;
        }
    }

    cout << "\n===========================\n";
    return 0;
}
