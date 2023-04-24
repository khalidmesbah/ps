#include <iostream>
using namespace std;

int main()
{

    int n, arr[n], fre[n+1], most_frequent_number{-1};
    cin >> n;
    

    for (int i = 0; i < n; i++)
        cin >> arr[i], fre[arr[i]]++;

    for (int i = 0; i < n; i++)
        if (most_frequent_number == -1 || fre[most_frequent_number] < fre[i])
            most_frequent_number = i;

    cout << most_frequent_number << endl;

    return 0;
}