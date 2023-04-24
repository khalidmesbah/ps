#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number of rows & columns of the square matrix\n";
    cin >> n;

    cout << "enter the matrix's entries\n";
    int arr[n][n], trace{0};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i == j)
                trace += arr[i][j];
        }

    cout << "the trace of the matrix is: " << trace;

    return 0;
}
