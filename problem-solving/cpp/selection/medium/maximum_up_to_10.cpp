#include <iostream>
using namespace std;

int main()
{
    cout << "===========================\n";
    while (1)
    {
        int N;
        cin >> N;

        int num, maxi;
        cin >> maxi;
        N--;
        if (N > 0)
        {
            cin >> num;
            N--;
            if (maxi < num)
                maxi = num;
        }
        if (N > 0)
        {
            cin >> num;
            N--;
            if (maxi < num)
                maxi = num;
        }
        if (N > 0)
        {
            cin >> num;
            N--;
            if (maxi < num)
                maxi = num;
        }
        if (N > 0)
        {
            cin >> num;
            N--;
            if (maxi < num)
                maxi = num;
        }
        if (N > 0)
        {
            cin >> num;
            N--;
            if (maxi < num)
                maxi = num;
        }
        if (N > 0)
        {
            cin >> num;
            N--;
            if (maxi < num)
                maxi = num;
        }
        if (N > 0)
        {
            cin >> num;
            N--;
            if (maxi < num)
                maxi = num;
        }
        if (N > 0)
        {
            cin >> num;
            N--;
            if (maxi < num)
                maxi = num;
        }
        if (N > 0)
        {
            cin >> num;
            N--;
            if (maxi < num)
                maxi = num;
        }

        cout << maxi;
    }
    cout << "\n===========================\n";
    return 0;
}
