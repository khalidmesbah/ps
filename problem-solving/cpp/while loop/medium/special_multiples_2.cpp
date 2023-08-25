#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    while (1)
    {
        int N, i{0};
        cin >> N;
        while (N)
            if ((i += 3) % 4 != 0)
                cout << i << " ", N--;
    }

    cout << "\n===========================\n";
    return 0;
}
