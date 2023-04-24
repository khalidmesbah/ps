#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    while (1)
    {
        int N;
        cin >> N;
        cout << "\nthe results\n";
        while (N)
        {
            string s;
            cin >> s;
            N--;

            if (s.length() == 2 &&
                (((s[0] == 'N' || s[0] == 'n') && (s[1] == 'O' || s[1] == 'o')) ||
                 ((s[1] == 'N' || s[1] == 'n') && (s[0] == 'O' || s[0] == 'o'))))
            {
                cout << s << endl;
            }
        }
    }

    cout << "\n===========================\n";
    return 0;
}
// 9 Yss No noOO oN Mostafa no nN oOOooo oO