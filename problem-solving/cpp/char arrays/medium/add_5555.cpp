#include <iostream>
using namespace std;

int main()
{

    string s{"3001072"};
    // string s{"999999999999999999999999999999999"};

    int carry{0};
    int digit;

    for (int i = 0; i < s.size(); i++)
    {
        digit = s[s.size() - 1 - i] - '0';
        if (i < 4)
            digit += 5;
        digit += carry;
        if (digit >= 10)
            digit -= 10,
                carry = 1;
        else
            carry = 0;

        s[s.size() - 1 - i] = digit + '0';
    }

    if (carry)
        cout << 1;
    cout << s << endl;

    return 0;
}