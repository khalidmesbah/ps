/*
a square matrix A is skew symmetric if AT = -A
the entries on the main diagonal must be zeros
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "enter the number of rows/cols of the square matrix\n";
    int n;
    cin >> n;
    int originalArr[n][n];
    int transposedArr[n][n]{0};
    bool is_skew_symmetric = true;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> originalArr[i][j];
            transposedArr[j][i] = originalArr[i][j];
        }


    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (transposedArr[i][j] != originalArr[i][j]*-1 || originalArr[i][i] !=0)
                is_symmetric = false;

    if (is_skew_symmetric)
        cout << "the matrix is skew symmetric";
    else
        cout << "the matrix is not skew symmetric";

    return 0;
}
