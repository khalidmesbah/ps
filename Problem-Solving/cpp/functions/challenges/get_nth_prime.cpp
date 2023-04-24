#include <iostream>
using namespace std;

bool is_prime(int n)
{
     if (n <= 1)
          return false;
     for (int i = 2; i < n; i++)
          if (n % i == 0)
               return false;
     return true;
}
int nth_prime(int n)
{
     int cnt{0};
     for (int i = 0; i < 1000; i++)
     {
          if (is_prime(i))
               ++cnt;
          if (cnt == n)
               return i;
     }
     return 0;
}

int main()
{
     cout << nth_prime(6);
     return 0;
}
     