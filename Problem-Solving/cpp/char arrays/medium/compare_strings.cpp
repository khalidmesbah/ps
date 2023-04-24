#include <iostream>
using namespace std;

int main()
{

    string s1{"azzzzzzz"}, s2{"za"};
    // cin >> str;

    int is_smaller{-1};
    string smallS{s1};
    if (s1.size() > s2.size())
        smallS = s2;

    for (int i = 0; is_smaller == -1 && i < smallS.size(); i++)
        if (s1[i] != s2[i])
        {
            if (s1[i] < s2[i])
                is_smaller = 1;
            else
                is_smaller = 0;
        }
    if (is_smaller == -1)
    {
        if (s1.size() < s2.size())
            is_smaller = 1;
        else
            is_smaller = 0;
    }

    if (is_smaller)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}