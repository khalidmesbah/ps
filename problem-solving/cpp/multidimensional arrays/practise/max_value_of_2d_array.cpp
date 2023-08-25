#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cin >> rows >> cols;
    int arr[rows][cols]{0}, max_col{0}, max_row{0};

    for (int row = 0; row < rows; row++)
        for (int col = 0; col < cols; col++)
        {
            cin >> arr[row][col];
            if (arr[row][col] >= arr[max_row][max_col])
                max_row = row, max_col = col;
        }

    cout << arr[max_row][max_col] << " => " << max_row << " * " << max_col << endl;
    return 0;
}