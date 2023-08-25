#include <iostream>
using namespace std;

int main()
{
    const int N{123};
    string str;
    cin>>str;
    int fre[N]{0};

    for (int i = 0; i < str.size(); i++)
        fre[str[i]]++;

    for (int i = 'a'; i <= 'z'; i++)
        if (fre[i])
            cout << char(i) << " " << fre[i] << endl;

    return 0;
}