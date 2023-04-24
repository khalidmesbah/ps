#include <iostream>
using namespace std;

int main()
{

    string input, str;
    cin >> input >> str;

    if (str.size() > input.size())
    {
        cout << "NO\n";
        return 0;
    }

    bool is_match{true};

    for (int i = 0; i <= input.size() - str.size(); ++i)
    {
        is_match = true;
        for (int j = 0; j < str.size() && is_match; ++j)
        {
            if (input[i + j] != str[j])
                is_match = false;
        }
        if (is_match)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}