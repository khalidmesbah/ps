#include <iostream>
using namespace std;

int main()
{

    int n, min_result, ft{1};
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int i = 1; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (ft)
            {
                min_result = A[i] + A[j] + j - i;
                ft = 0;
                continue;
            }
            if (A[i] + A[j] + j - i < min_result)
                min_result = A[i] + A[j] + j - i;
        }
    cout << min_result;
    return 0;
}
