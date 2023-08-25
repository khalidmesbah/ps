#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";

    while (1)
    {
        int N, even_sum{0}, cnt_even{0}, odd_sum{0}, cnt_odd{0};
        cin >> N;

        while (N)
        {
            N--;
            int n;
            cin >> n;
            if (N % 2 == 0)
            {
                even_sum += n;
                cnt_even++;
            }
            else
            {
                odd_sum += n;
                cnt_odd++;
            }
        }

        cout << "even sum: " << (double)even_sum / cnt_even << "\nodd sum: " << (double)odd_sum / cnt_odd;
    }

    cout << "\n===========================\n";
    return 0;
}
