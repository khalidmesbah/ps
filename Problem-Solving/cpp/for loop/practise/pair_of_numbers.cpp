#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int N, M, SUM, cnt{0}, j;
    cin >> N >> M >> SUM;

    for (int i = 1; i <= N; i++)
    {
        j = SUM - i;
        if (1 <= j && j <= M)
            cnt++;
    }

    cout << cnt;
    cout << "\n===========================\n";
    return 0;
}