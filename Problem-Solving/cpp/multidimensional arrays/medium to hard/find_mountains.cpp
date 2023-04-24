
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    int di[]{-1, -1, -1, 0, 0, 1, 1, 1};
    int dj[]{-1, 0, 1, -1, 1, -1, 0, 1};

    int ni, nj;
    bool is_mountian{true};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            is_mountian = true;
            for (int d = 0; d < 8; ++d)
            {
                ni = i + di[d], nj = j + dj[d];
                if (ni < n && ni >= 0 && nj < m && nj >= 0 && arr[ni][nj] >= arr[i][j])
                {
                    is_mountian = false;
                    break;
                }
            }
            if (is_mountian)
                cout << i << " " << j << endl;
        }

    return 0;
}