#include <iostream>
using namespace std;

int main()
{
    int num, digits{0};
    cin >> num;

    if (num == 0)
        digits = 1;
    else
        while (num)
            num /= 10, digits++;

    cout << "the number of digits is " << digits << endl;
    return 0;
}