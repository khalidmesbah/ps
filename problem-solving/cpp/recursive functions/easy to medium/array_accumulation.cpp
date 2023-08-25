#include <iostream>
using namespace std;

void array_accumulate(int arr[], int len)
{
    if (len == 1)
        return;
    array_accumulate(arr, len - 1);
    arr[len - 1] += arr[len - 2];
}
/* int array_accumulate(int arr[], int len)
{
    if (len == 1)
        return arr[0];
    return arr[len - 1] += array_accumulate(arr, len - 1);
} */

int main()
{
    int arr[]{1, 8, 2, 10, 3};
    array_accumulate(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
}
