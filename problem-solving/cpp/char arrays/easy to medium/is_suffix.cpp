#include <iostream>
using namespace std;

int main()
{

    string string, suffix;
    cin >> string >> suffix;

    bool is_suffix{true};
    if (string.size() < suffix.size())
        is_suffix = false;

    for (int i = 0; i < suffix.size(); ++i)
        if (string[string.size() - i - 1] != suffix[suffix.size() - i - 1])
            is_suffix = false;

    if (is_suffix)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}