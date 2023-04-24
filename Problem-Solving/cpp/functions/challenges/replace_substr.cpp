#include <iostream>
using namespace std;

bool starts_with(string input, string pattern, int pos = 0)
{
    if (pos + (int)pattern.size() > input.size())
        return false;

    for (int i = 0; i < (int)pattern.size(); i++)
    {
        if (input[pos + i] != pattern[i])
            return false;
    }
    return true;
}

string replace_str(string input, string pattern, string to)
{
    string ss{""};
    for (int i = 0; i < (int)input.size(); ++i)
    {
        if (starts_with(input, pattern, i))
            ss += to, i += (int)pattern.size();
        ss += input[i];
    }

    return ss;
}

int main()
{
    cout << "======>" << replace_str("aabcabaaad", "aa", "") << endl;
    cout << "======>" << replace_str("aabcabaaad", "aa", "x") << endl;
    cout << "======>" << replace_str("aabcabaaad", "aa", "aaaa") << endl;
    return 0;
}
