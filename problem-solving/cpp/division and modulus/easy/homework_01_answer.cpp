#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    double A{(a + b + c + d + e) / 5};

    double B{(a + b + c) / (d + e)};

    double C{((a + b + c) / 3) / ((d + e) / 2)};

    cout << "the average: " << A << endl;
    cout << "first 3/last 2: " << B << endl;
    cout << "average of first 3/average of last 2: " << C << endl;

    cout << "the relation between B and C is that ""B = C*3/2";

    return 0;
}
