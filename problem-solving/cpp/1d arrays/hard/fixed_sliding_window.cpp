#include <iostream>
using namespace std;

int main()
{
    int K, N;
    cin >> K >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int sum{0}, biggest_sum{0}, index;
    for (int i{0}; i < N - K + 1; i++)
    {
        sum = 0;
        for (int j{0}; j < K; j++)
            sum += arr[i + j];

        if (biggest_sum < sum)
            biggest_sum = sum, index = i;
    }

    cout << "the biggest sum of " << K << " consecuitve elements is " << biggest_sum << "\nfrom index " << index << " to index " << index + K - 1 << endl;

    return 0;
}

/*
3 7
1 0 3 -4 2 -6 9
 */