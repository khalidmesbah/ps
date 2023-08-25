#include <iostream>
using namespace std;

void array_incrementer(int arr[], int len)
{
     if (len == 0)
          return;
     arr[len - 1] += len - 1;
     array_incrementer(arr, len - 1);
}

int main()
{
     int arr[5]{1, 8, 2, 10, 3};
     array_incrementer(arr, 5);
     for (int i = 0; i < 5; i++)
          cout << arr[i] << " ";
     cout << endl;
}
