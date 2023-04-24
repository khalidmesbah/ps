#include <iostream>
using namespace std;

int main()
{

    string from{"abcdefghijklmnopqrstuvwxyz0123456789"},
        to{"YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()"},
        str;
    cin >> str;

    char letter_map[123]{0};

    for (int i = 0; i < from.size(); i++)
        letter_map[from[i]] = to[i];

    for (int i = 0; i < str.size(); i++)
        if (('A' <= str[i] && str[i] <= 'Z') == false)
            str[i] = letter_map[str[i]];

    cout << str;

    return 0;
}