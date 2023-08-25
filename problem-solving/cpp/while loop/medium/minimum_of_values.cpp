#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";
    while (1)
    {

        cout << "enter number of test cases\n";
        int T, TT;
        cin >> T;
        TT = T;
        while (T--)
        {
            cout << "test case number " << TT - T << ": enter N followed by N values\n";
            int N, mini{-1};
            cin >> N;
            if (N < 0)
                N *= -1;
            bool ft{1};
            while (N)
            {
                if (ft)
                {
                    cin >> mini;
                    ft = 0;
                }
                else
                {
                    int n;
                    cin >> n;
                    if (n < mini)
                        mini = n;
                }
                N--;
            }
            cout << "the minimum value is : " << mini << endl;
        }
    }

    cout << "\n===========================\n";
    return 0;
}
