#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    while (1)
    {
        int n, s{1}, s2{0};
        cin >> n;
        while (s <= n)
        {
            s2 = s++;
            while (s2--)
                cout << "#";
            cout << endl;
        }
    }

    cout << "\n===========================\n";
    return 0;
}
