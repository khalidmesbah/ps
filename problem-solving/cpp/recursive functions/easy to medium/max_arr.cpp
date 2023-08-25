#include <iostream>
using namespace std;

/* int max_arr(int arr[], int len)
{
     static int max{arr[len - 1]};
     if (len == 0)
          return max;
     if (arr[len - 1] >= max)
          max = arr[len - 1];
     return max_arr(arr, len - 1);
}
 */

int max_arr(int arr[], int len)
{
     if (len == 1)
          return arr[0];

     return max(arr[len - 1], max_arr(arr, len - 1));
}

int main()
{
     int arr[5]{1, 8, 2, 10};
     cout << max_arr(arr, 4) << endl;
}
