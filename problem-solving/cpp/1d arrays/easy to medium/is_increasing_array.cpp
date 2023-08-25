#include <iostream>
using namespace std;

int main()
{
    int n, is_icreasing{1};
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
        if (arr[i - 1] > arr[i])
        {
            is_icreasing = 0;
            break;
        }

    if (is_icreasing)
        cout << "Yes";
    else
        cout << "NO";

    return 0;
}