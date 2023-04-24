#include <iostream>
using namespace std;

int main()
{
    int n;
    int evenSum{0};
    int oddSum{0};
    int i{1};
    while (i <= 8)
    {
        cin >> n;
        if (i % 2 == 0)
            evenSum += n;
        else
            oddSum += n;
        i++;
    }

    cout << "the sum of even numbers is: " << evenSum << endl
         << "the sum of odd numbers is: " << oddSum;
    return 0;
}
