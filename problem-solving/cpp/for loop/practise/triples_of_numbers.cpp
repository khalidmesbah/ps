#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int N, M, W, cnt{0};
    cin >> N >> M >> W;

    for (int i = 1; i <= N; i++)
        for (int j = i; j <= M; j++)
            if (1 <= (i + j) && (i + j) <= W)
                /*
                if w = 100 , i+j = 34
                then the valid numbers
                which are below or equal to 34
                are 100 - 34 + 1 =67
                 */
                cnt += W - (i + j) + 1;
    cout << cnt;
    cout << "\n===========================\n";
    return 0;
}