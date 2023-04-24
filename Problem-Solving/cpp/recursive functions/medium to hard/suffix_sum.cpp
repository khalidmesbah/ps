#include <iostream>
using namespace std;

int suffix_sum(int arr[], int len, int i)
{
    if (i == 1)
        return arr[len - 1];

    return arr[len - 1] + suffix_sum(arr, --len, --i);
}

int main()
{
    int arr[]{1, 3, 4, 6, 7};
    cout << suffix_sum(arr, 5, 3);
    return 0;
}
