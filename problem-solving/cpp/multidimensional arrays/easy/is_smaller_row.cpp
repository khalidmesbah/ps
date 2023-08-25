#include <iostream>
using namespace std;

int main()
{

     int n, m;
     cin >> n >> m;
     int arr[n][m];
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               cin >> arr[i][j];
          }
     }

     cout << "Enter the number of queries: ";
     int Q;
     cin >> Q;
     while (Q--)
     {
          cout << "Enter the row 1 and row 2: ";
          int row_1, row_2;
          cin >> row_1 >> row_2;
          bool is_smaller{true};
          for (int i = 0; i < m; i++)
          {
               if (arr[row_1 - 1][i] >= arr[row_2 - 1][i])
               {
                    is_smaller = false;
                    break;
               }
          }
          if (is_smaller)
               cout << "YES\n";
          else
               cout << "NO\n";
     }

     return 0;
}
