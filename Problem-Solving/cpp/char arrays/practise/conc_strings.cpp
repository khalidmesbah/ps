#include <iostream>
using namespace std;

int main()
{

    string name1, name2;
    cin >> name1 >> name2;

    for (int i = 0; i < max(name1.size(), name2.size()); i++)
    {
        if (i < name1.size())
            cout << name1[i];
        if (i < name2.size())
            cout << name2[i];
    }
    return 0;
}