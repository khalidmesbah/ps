#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int n, arr[n], maxi_sum{-1000000};
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
        if (arr[i - 1] + arr[i] > maxi_sum)
            maxi_sum = arr[i - 1] + arr[i];

    cout << maxi_sum;

    cout << "\n===========================\n";
    return 0;
}