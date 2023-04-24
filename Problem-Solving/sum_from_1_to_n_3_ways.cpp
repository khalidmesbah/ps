#include <iostream>
using namespace std;

// mathematical
/* int sum(int n)
{
     return n * (n + 1) / 2;
} */
// iteration
/* int sum(int n)
{
     int res{0};
     for (int i = 0; i <= n; i++)
          res += i;
     return res;
} */
// recursive
int sum(int n)
{
     if (n == 1)
          return 1;
     return n + sum(n - 1);
}
int main()
{

     cout << sum(5);
}
