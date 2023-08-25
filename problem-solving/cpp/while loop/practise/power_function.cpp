#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int num, pow;
    cin >> num >> pow;
    int n = num;
    while (pow-- > 1)
    {
        num *= n;
    }

    cout<<num;
    cout << "\n===========================\n";
    return 0;
}
