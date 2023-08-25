#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    cout << "enter the number of test cases:-\n";
    int T;
    cin >> T;
    while (T--)
    {

        cout << "enter N followed by N integers\n";
        int N, sum{0}, cnt{1};
        cin >> N;
        while (N--)
        {
            int n, i{1}, nn;
            cin >> n;
            nn = n;
            while (i < cnt)
                n *= nn, i++;
            cnt++, sum += n;
        }
        cout << sum;
    }

    cout << "\n===========================\n";
    return 0;
}