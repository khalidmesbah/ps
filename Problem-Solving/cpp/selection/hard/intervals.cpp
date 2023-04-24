#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    while (1)
    {
        int x, cnt{0};
        cin >> x;
        int s1, e1, s2, e2, s3, e3;
        cin >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

        if (s1 <= x && x <= e1)
            cnt++;
        if (s2 <= x && x <= e2)
            cnt++;
        if (s3 <= x && x <= e3)
            cnt++;

        cout << cnt;
    }

    cout << "\n===========================\n";
    return 0;
}
