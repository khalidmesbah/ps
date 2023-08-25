#include <iostream>
using namespace std;

int main()
{
    int r{5}, c{20};
    cout << "Enter the number of rows/cols : ";
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r - i; j++)
            cout << " ";
        for (int j = 0; j < c; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
