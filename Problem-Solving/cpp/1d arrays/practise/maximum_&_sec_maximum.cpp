#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int n, arr[n], maxi, sec_maxi;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    maxi = arr[0];
    sec_maxi = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] > maxi)
            maxi = arr[i];

    for (int i = 1; i < n; i++)
        if (arr[i] != maxi && sec_maxi < arr[i])
            sec_maxi = arr[i];

    cout << "the maximum number is " << maxi << "\nthe second maximum number is " << sec_maxi;

    cout << "\n===========================\n";
    return 0;
}