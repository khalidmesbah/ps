#include <iostream>
using namespace std;

int main()
{
     int rows, cols, from, to, temp;
     cout << "Enter the number of rows,cols,entries,two cols to swap: ";
     cin >> rows >> cols;
     int arr[rows][cols]{0};

     for (int row = 0; row < rows; row++)
          for (int col = 0; col < cols; col++)
               cin >> arr[row][col];

     cin >> from >> to;

     for (int row = 0; row < rows; row++)
          temp = arr[row][from], arr[row][from] = arr[row][to], arr[row][to] = temp;

     for (int row = 0; row < rows; row++)
     {
          for (int col = 0; col < cols; col++)
               cout << arr[row][col] << " ";
          cout << endl;
     }
     return 0;
}
