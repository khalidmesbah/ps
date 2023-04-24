#include <iostream>
#include <algorithm>
using namespace std;

struct Name
{
    string name;
};

int main()
{

    int arr[] = {6, 5, 4, 3, 2, 1};
    sort(arr, arr + 6); //(array,go six places maximum of the array)
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}