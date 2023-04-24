#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int T, N, n, nn, sum;
    cin >> T;

    for (; T > 0; T--)
    {
        sum = 0;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> n, nn = n;
            for (int j = 0; j < i; j++)
                n *= nn;
            sum += n;
        }
        cout << sum << endl;
    }

    cout << "\n===========================\n";
    return 0;
}