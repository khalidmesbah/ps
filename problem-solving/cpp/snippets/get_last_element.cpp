#include <iostream>
using namespace std;

int main()
{
    int n{123456};

    cout << n % 10 << endl;
    cout << n % 100 << endl;
    cout << n % 1000 << endl;
    cout << n % 10000 << endl;
    cout << n % 100000 << endl;
    cout << n % 1000000 << endl;

    return 0;
}