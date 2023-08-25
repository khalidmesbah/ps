#include <iostream>
using namespace std;

double arr_average(int arr[], int len)
{
     if (len == 1)
          return arr[0];

     return (arr[len - 1] + arr_average(arr, len - 1) * (len - 1)) / len;
}

int main()
{
     int arr[5]{1, 8, 2, 10, 3};
     cout << arr_average(arr, 5) << endl;
}
