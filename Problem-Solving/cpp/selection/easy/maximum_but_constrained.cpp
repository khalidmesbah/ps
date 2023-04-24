#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    while (1)
    {
        int a{0}, b{0}, c{0}, maxi{-1};
        cin >> a >> b >> c;
        if (a < 100)
            maxi = a;
        if (maxi < b && b < 100)
            maxi = b;
        if (maxi < c && c < 100)
            maxi = c;
        cout << maxi << endl;
    }

    cout << "\n===========================\n";
    return 0;
}
