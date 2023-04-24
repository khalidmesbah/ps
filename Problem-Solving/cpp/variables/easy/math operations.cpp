#include <iostream>
using namespace std;

int main()
{

    int n1, n2;
    cin >> n1 >> n2;

    cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    if (n2 != 0) cout << n1 << " / " << n2 << " = " << double(n1) / n2 << endl;
    else cout << n1 << " / " << n2 << " = " << "infinity" << "\n";

    return 0;
}
