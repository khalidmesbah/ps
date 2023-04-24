// buggy??
#include <iostream>
using namespace std;

int main()
{

    string str;
    cin >> str;

    int num{0};
    for (int i = 0; i < str.size(); i++)
        num += str[i] - '0',num *= 10;
    num /= 10;
    cout << num << " , " << num * 3;

    return 0;
}