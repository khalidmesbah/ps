#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int i{0}, j{0}, sum{0}, nxt_val, best_i, best_j, ni, nj;
    int di[]{0, 1, 1};
    int dj[]{1, 0, 1};

    while (i < n && j < m)
    {
        sum += arr[i][j];

        best_i = -1, best_j = -1;
        for (int k = 0; k < 3; ++k)
        {
            ni = i + di[k];
            nj = j + dj[k];
            if (ni < n && nj < m && (best_i == -1 || nxt_val < arr[ni][nj]))
            {
                nxt_val = arr[ni][nj], best_i = ni, best_j = nj;
            }
        }

        if (best_i == -1)
            break;

        i = best_i, j = best_j;
    }

    cout << sum;
    return 0;
}