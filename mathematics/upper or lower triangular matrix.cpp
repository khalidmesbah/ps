
#include <iostream>
using namespace std;

int main()
{
     int n, sum{0}, lower_sum{0}, upper_sum{0};
     cin >> n;
     int arr[n][n];

     for (int i = 0; i < n; i++)
          for (int j = 0; j < n; j++)
               cin >> arr[i][j];

     for (int i = 0; i < n; i++)
          for (int j = 0; j < n; j++)
          {
               sum += arr[i][j];
               if (i + j != i && i + j < n)
                    lower_sum += arr[j + i][i], upper_sum += arr[i][j + i];
          }

     if (upper_sum)
          cout << "the matrix is upper triangular matrix and it's sum is: " << sum << endl;
     if (lower_sum)
          cout << "the matrix is lower triangular matrix and it's sum is: " << sum << endl;

     return 0;
}
