/*
the square matrix (D) is diagonal if
Dij = 0 ∀ i != j
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number of rows/cols of the square matrix\n";
    cin >> n;

    int arr[n][n]{0};
    bool is_diagonal = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i != j && arr[i][j] != 0)
                is_diagonal = false;
        }

    if (is_diagonal)
        cout << "the matrix is daigonal";
    else
        cout << "the matrix is NOT daigonal";

    return 0;
}
