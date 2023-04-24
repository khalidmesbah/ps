#include <iostream>
using namespace std;

bool is_palindrome(int arr[], int len, int i = 0)
{
    if (len == 1 || len - 1 == i)
        return true;
    if (arr[i] != arr[len - 1])
        return false;

    return is_palindrome(arr, --len, ++i);
}

int main()
{
    int arr[]{0, 1, 3, 4, 4, 3, 1, 0};
    cout << is_palindrome(arr, 8);
    return 0;
}
