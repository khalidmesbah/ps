#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    int cnt{0};
    for (int a = 1; a <= 200; a++)
        for (int b = 1; b <= 200; b++)
            for (int c = 1; c <= 200; c++)
                cnt += (1 <= (a + b - c) && (a + b - c) <= 200);
    cout << cnt;

    cout << "\n===========================\n";
    return 0;
}