#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int n, a{0}, b{1}, temp;
    cin >> n;
    cout << a << " "
         << b << " ";
    for (int i = 2; i < n; i++)
        cout << a + b << " ",
            temp = b,
            b = a + b,
            a = temp;

    cout << "\n===========================\n";
    return 0;
}