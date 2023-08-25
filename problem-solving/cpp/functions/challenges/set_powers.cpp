#include <iostream>
using namespace std;

void set_powers(int arr[], int len = 5, int m = 2)
{
    arr[0] = 1;

    for (int i = 1; i < len; ++i)
        arr[i] = arr[i - 1] * m;

    for (int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[100];
    set_powers(arr, 6, 2);
    set_powers(arr, 4, 3);

    return 0;
}
