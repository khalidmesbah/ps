#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int mini{99999}, sec_mini{99999}, thrd_mini{99999};

    for (int i = 0; i < n; i++)
        if (arr[i] < mini)
            mini = arr[i];

    for (int i = 0; i < n; i++)
        if (arr[i] != mini && arr[i] < sec_mini)
            sec_mini = arr[i];

    for (int i = 0; i < n; i++)
        if (arr[i] != sec_mini && arr[i] != mini && arr[i] < thrd_mini)
            thrd_mini = arr[i];

    cout << mini << " " << sec_mini << " " << thrd_mini << endl;
    return 0;
}
