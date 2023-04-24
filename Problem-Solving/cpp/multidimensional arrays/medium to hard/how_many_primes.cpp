#include <iostream>
using namespace std;

int main()
{
     int n, m, val;
     cin >> n >> m;
     bool primes[n][m]{0};
     for (int i = 0; i < n; ++i)
          for (int j = 0; j < m; ++j)
          {
               cin >> val;

               if (val <= 1)
                    continue;

               primes[i][j] = 1;
               for (int k = 2; k < val; ++k)
               {
                    if (val % k == 0)
                    {
                         primes[i][j] = 0;
                         break;
                    }
               }
          }

     int q, si, sj, rows, cols, cnt;
     cin >> q;

     while (q--)
     {
          cin >> si >> sj >> rows >> cols;
          cnt = 0;

          for (int i = si; i <= si + rows - 1; ++i)
               for (int j = sj; j <= sj + cols - 1; ++j)
                    cnt += primes[i][j];

          cout << cnt << "\n";
     }

     return 0;
}
