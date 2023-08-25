#include <iostream>
using namespace std;

void right_max(int arr[], int len, int i = 0)
{

    if (len == 1)
        return;

    arr[len - ++i - 1] = max(arr[len - 1], arr[len - 2]);
    right_max(arr, len - 1);
}

int main()
{
    // int arr[]{1, 3, 5, 7, 4, 2};
    int arr[]{1, 8, 2, 10, 3};
    right_max(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
