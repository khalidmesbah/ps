#include <iostream>
using namespace std;

// int prefix_sum(int arr[], int len, int i)
// {
//     if (i == 1)
//         return arr[i - 1];

//     return arr[i - 1] + prefix_sum(arr, len, --i);
// }
/* another way */
int prefix_sum(int arr[], int i)
{
    if (i == 1)
        return arr[i - 1];

    return arr[0] + prefix_sum(arr + 1, --i);
}

int main()
{
    int arr[]{1, 3, 4, 6, 7};
    cout << prefix_sum(arr, 3);
    return 0;
}
