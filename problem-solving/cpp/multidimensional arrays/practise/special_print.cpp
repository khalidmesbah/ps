#include <iostream>
using namespace std;

int main()
{
     int rows, cols;
     cout<<"Enter the number of rows,cols,entries: ";
     cin >> rows >> cols;
     int arr[rows][cols]{0};

     int counterdiagonal_sum{0},
         leading_diagonal_sum{0},
         last_row_sum{0},
         last_col_sum{0};

     for (int row = 0; row < rows; row++)
          for (int col = 0; col < cols; col++)
          {
               cin >> arr[row][col];
               if (row == col)
                    leading_diagonal_sum += arr[row][col];
               if (row + col == cols - 1)
                    counterdiagonal_sum += arr[row][col];
               if (rows - 1 == row)
                    last_row_sum += arr[row][col];
               if (cols - 1 == col)
                    last_col_sum += arr[row][col];
          }

     cout << "the sum of antidiagonal entries: " << counterdiagonal_sum
          << "\nthe sum of main diagonal entries: " << leading_diagonal_sum
          << "\nthe sum of the last row entries: " << last_row_sum
          << "\nthe sum of the last col entries: " << last_col_sum << endl;
     return 0;
}