#include <iostream>
using namespace std;

int main()
{
    int arr[3][4]{
        {0, 10, 2, 7},
        {31, 40, 5, 32},
        {11, 12, 15, 16},
    };

    cout << arr[0][10] << " " << arr[1][5];

    return 0;
}