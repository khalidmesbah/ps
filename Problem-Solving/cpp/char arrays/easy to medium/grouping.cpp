#include <iostream>
using namespace std;

int main()
{

    string str;
    cin >> str;
    int fre[150]{0};

    for (int i = 0; i < int(str.size()); i++)
        fre[str[i]]++;

    for (int i = 0; i < 150; i++)
        if (fre[i])
        {
            while (fre[i]--)
                cout << char(i);
            cout << " ";
        }

    return 0;
}