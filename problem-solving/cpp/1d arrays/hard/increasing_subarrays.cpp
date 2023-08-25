#include <iostream>
using namespace std;

int main()
{
    int K, N;
    cin >> K >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int cnt{0};
    for (int i = 0; i < N - K; i++)
    {
        bool is_icreasing{true};
        for (int j = 1; j < K - 2; j++)
        {
            if (arr[i + j + 1] > arr[i + j] == false)
                is_icreasing = false;
        }
        if (is_icreasing)
            cnt++;
    }

    cout << cnt;

    return 0;
}

/*
3 7
1 0 3 -4 2 -6 9
 */