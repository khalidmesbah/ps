#include <iostream>
using namespace std;

int main()
{

    string str, substr;
    cin >> str >> substr;

    if (str.size() < substr.size())
    {
        cout << "NO";
        return 0;
    }

    int next_match{0};
    for (int i = 0; i < int(str.size()); i++)
        if (str[i] == substr[next_match])
        {
            next_match++;
            if (next_match == int(substr.size()))
            {
                cout << "YES";
                return 0;
            }
        }

    cout << "NO";

    return 0;
}