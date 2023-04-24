#include <iostream>
using namespace std;

int main()
{

    int n{19}, arr[n]{1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1};
    // int n{7}, arr[n]{1, 0, 0, 0, 1, 1, 1};
    int zeros{0}, ones{0}, sum{-1};
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            zeros = 0, ones = 0;
            cout << arr[i] << " => ";
            for (int k = j; k < n; k++)
            {
                cout << arr[k] << " ";
                if (arr[k] == 0)
                    zeros++;
                else
                    ones++;
                if ((ones == zeros || sum == -1) && zeros + ones > sum)
                    sum = zeros + ones;
            }
            cout << " => " << sum;
            cout << endl;
        }
  
    }

    cout << endl
         << sum << endl;
    return 0;
}

/*
3 7
1 0 3 -4 2 -6 9
 */