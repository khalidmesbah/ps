#include <iostream>
using namespace std;

int main()
{
    /*     int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << arr[0] << " ";
        for (int i = 1; i < n; i++)
            if (arr[i] != arr[i - 1])
                cout << arr[i] << " "; */

    // better solution
    int N, n, temp{-0};
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> n;
        if (n != temp)
            cout << n << " ", temp = n;
    }

    return 0;
}
// test case
/*
 12
 1 1 2 2 2 5 6 6 7 8 9 9

 output : 1 2 5 6 7 8 9
  */