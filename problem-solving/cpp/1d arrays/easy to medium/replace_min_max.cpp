#include <iostream>
using namespace std;

int main()
{
    int n, min, max;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < n; i++)

        if (arr[i] == min)
            arr[i] = max;
        else if (arr[i] == max)
            arr[i] = min;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}