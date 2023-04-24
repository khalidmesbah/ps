#include <iostream>
using namespace std;

int path_sum(int grid[3][3], int row, int col, int rows, int cols)
{
    if (0 <= col - 1 && col + 1 <= cols && row + 1 <= rows)
    {
        if (grid[row][col - 1] > grid[row][col + 1] && grid[row][col - 1] > grid[row + 1][col + 1])
        {
            return grid[row][col - 1] + path_sum(grid, row, col - 1, rows, cols);
        }
        else if (grid[row][col + 1] > grid[row][col - 1] && grid[row][col + 1] > grid[row + 1][col + 1])
        {
            return grid[row][col + 1] + path_sum(grid, row, col + 1, rows, cols);
        }
        else
        {
            return grid[row + 1][col + 1] + path_sum(grid, row + 1, col + 1, rows, cols);
        }
    }
    else
    {
        return grid[row][col] + path_sum(grid, row, col, rows, cols);
    }
}
int main()
{
    int arr[3][3]{
        {1, 7, 8},
        {2, 10, 11},
        {20, 5, 9}};
    cout << path_sum(arr, 0, 0, 3, 3);
    return 0;
}
