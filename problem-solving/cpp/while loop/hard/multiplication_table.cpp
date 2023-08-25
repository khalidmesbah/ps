#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int a, b, cnt{1}, start1{1}, start2{1};
    cin >> a >> b;
    while (start1 <= a)
    {
        while (start2 <= b)
            cout << start1 << " * " << start2 << " = " << start1 * start2 << endl, start2++;

        cout << endl;
        start2 = 1;
        start1++;
    }
    cnt = 1;

    cout << "\n===========================\n";
    return 0;
}