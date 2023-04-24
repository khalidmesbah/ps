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

    int i{0}, j{0}, sum{0}, nxt_val, best_i, best_j;

    while (i < n && j < m)
    { // sum the current entry
        sum += arr[i][j];
        // reset the position
        best_i = -1, best_j = -1;
        // check down
        if (i + 1 < n)
            nxt_val = arr[i + 1][j], best_i = i + 1, best_j = j;
        // check right
        if (j + 1 < m && (best_i == -1 || nxt_val < arr[i][j + 1]))
            nxt_val = arr[i][j + 1], best_i = i, best_j = j + 1;
        // check diagonal
        if (i + 1 < n && j + 1 < m && (best_i == -1 || nxt_val < arr[i + 1][j + 1]))
            nxt_val = arr[i + 1][j + 1], best_i = i + 1, best_j = j + 1;
        // break if there's no next value
        if (best_i == -1 || best_j == -1)
            break;
        // update the position
        i = best_i, j = best_j;
    }

    cout << sum;
    return 0;
}