#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the dimensions of the matrix: ";
    int n, m, val;
    cin >> n >> m;
    int trans_arr[m][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> trans_arr[j][i];

    cout << "the transpose of the matrix is:-\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << trans_arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
