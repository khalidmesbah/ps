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

     for (int col = 0; col < cols; col++)
          temp = arr[from][col], arr[from][col] = arr[to][col], arr[to][col] = temp;

     for (int row = 0; row < rows; row++)
     {
          for (int col = 0; col < cols; col++)
               cout << arr[row][col] << " ";
          cout << endl;
     }
     return 0;
}
