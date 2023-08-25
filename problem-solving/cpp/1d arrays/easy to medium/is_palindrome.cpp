#include <iostream>
using namespace std;

int main()
{
    int n, is_palidrome{1};
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n / 2; i++)
        if (arr[i] != arr[n - i - 1])
            is_palidrome = 0;

    if (is_palidrome)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
// test case
/*
 12
 1 1 2 2 2 5 6 6 7 8 9 9

 output : 1 2 5 6 7 8 9
  */