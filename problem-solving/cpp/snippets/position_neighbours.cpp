
#include <iostream>
using namespace std;

int main()
{
     int arr[3][4]{
         {1, 2, 3, 10},
         {6, 5, 4, 11},
         {7, 8, 9, 12},
     };

     int di[]{-1, -1, -1, 0, 0, 1, 1, 1};
     int dj[]{-1, 0, 1, -1, 1, -1, 0, 1};

     int i, j, ni, nj;
     cout << "type row,col to know the neighbours: ";
     cin >> i >> j;

     for (int d = 0; d < 8; ++d)
     {
          ni = i + di[d], nj = j + dj[d];
          if (ni < 3 && ni >= 0 && nj < 4 && nj >= 0)
               cout << arr[ni][nj] << " ";
     }

     return 0;
}