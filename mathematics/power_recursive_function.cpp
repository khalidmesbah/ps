#include <iostream>
using namespace std;

int my_pow(int val, int p = 2)
{
     if (p == 0)
          return 1;
     return val * my_pow(val, p - 1);
}

int main()
{
     cout << my_pow(7, 3);
     return 0;
}
