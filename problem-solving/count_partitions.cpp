#include <iostream>
using namespace std;

int count_partitions(int n, int m)
{
     static int cnt{0};

     if (n == 0)
          return 1;
     if (m == 0 || n < 0)
          return 0;

     return count_partitions(n - m, m) + count_partitions(n, m - 1);
}

int main()
{
     cout << count_partitions(7, 4);
}
