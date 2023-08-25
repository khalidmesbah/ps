/*
the square matrix (D) is an identity matrix if
Dij = 0 ∀ i != j 
&&
Dij = 1 ∀ i == j
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number of rows/cols of the square matrix\n";
    cin >> n;

    int arr[n][n]{0};
    int is_identity = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i != j && arr[i][j] != 0 ||i == j && arr[i][j] != 1)
                is_identity = 0;
        }

    if (is_identity)
        cout << "the matrix is an identity matrix";
    else
        cout << "the array is NOT an identity matrix";

    return 0;
}
