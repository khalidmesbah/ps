/*
a square matrix A is symmetric if AT = A
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
    bool is_symmetric = true;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> originalArr[i][j];
            transposedArr[j][i] = originalArr[i][j];
        }


    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (transposedArr[i][j] != originalArr[i][j])
                is_symmetric = false;

    if (is_symmetric)
        cout << "the matrix is symmetric";
    else
        cout << "the matrix is not symmetric";

    return 0;
}
