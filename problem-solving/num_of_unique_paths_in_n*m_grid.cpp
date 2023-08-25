#include <iostream>
using namespace std;

int unique_paths(int n, int m)
{
     if (n == 1 || m == 1)
          return 1;
     return unique_paths(n, m - 1) + unique_paths(n - 1, m);
}
int main()
{

     cout << unique_paths(3, 3) << endl;
     cout << unique_paths(1, 3) << endl;
     cout << unique_paths(3, 1) << endl;
     cout << unique_paths(3, 2) << endl;
}
