#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    while (1)
    {
        int n, s{0}, s2;
        cin >> n;
        while (s < n)
        {
            int s2{s};
            while (s2++ < n)
                cout << "#";
            cout << endl;
            s++;
        }
    }

    cout << "\n===========================\n";
    return 0;
}
