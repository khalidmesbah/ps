#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    int arr[rows][cols], flattened_array[rows * cols];
    for (int row = 0; row < rows; row++)
        for (int col = 0; col < cols; col++)
            cin >> arr[row][col];

    for (int row = 0; row < rows; row++)
        for (int col = 0; col < cols; col++)
            flattened_array[row * cols + col] = arr[row][col];

    for (int i = 0; i < rows * cols; i++)
        cout << flattened_array[i] << " ";

    // index = i*cols+j;
    // i = index/cols =(index-index%4)/4
    // j = index%cols

    return 0;
}
