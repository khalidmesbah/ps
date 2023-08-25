#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";
    int cnt{0}, x, y;
    for (int x = 50; x <= 300; x++)
    {
        int start{70};
        if (start < x + 1)
            start = x + 1;

        for (int y = start; y <= 400; y++)
            if ((x + y) % 7 == 0)
                cnt++;
    }
    cout << cnt;

    cout << "\n===========================\n";
    return 0;
}