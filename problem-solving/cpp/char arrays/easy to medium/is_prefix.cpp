#include <iostream>
using namespace std;

int main()
{

    string string, prefix;
    cin >> string >> prefix;

    bool is_prefix{true};

    if (prefix.size() > string.size())
        is_prefix = false;
        
    for (int i = 0; i < prefix.size(); i++)
        if (string[i] != prefix[i])
            is_prefix = false;

    if (is_prefix)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}