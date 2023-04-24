#include <iostream>
using namespace std;

bool is_palindrome_arr(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cout << is_palindrome_arr(arr, N);

    return 0;
}
