#include <iostream>
using namespace std;

bool is_substring(string main, string prefix, int pos = 0)
{
    if (pos == prefix.size())
        return true;

    if (main[pos] != prefix[pos])
        return false;

    return is_substring(main, prefix, pos + 1);
}

int main()
{
    cout << is_substring("abcdefgh", "abcdefg") << endl;
    cout << is_substring("abcdefgh", "abd");
    return 0;
}
