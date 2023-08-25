#include <iostream>
using namespace std;

int main()
{
    cout << "how much recaman's sequence elements do you want? ";
    int n;
    cin >> n;
    int sequence[n + 1];
    sequence[0] = 0;
    int last_value{0}, last_index{0};
    bool is_unique;
    for (int i = 1; i <= n; i++)
    {
        is_unique = true;
        for (int j = 0; j < i; j++)
            if (sequence[j] == last_value - last_index - 1)
                is_unique = false;

        if (last_value - last_index - 1 > 0 && is_unique)
            sequence[i] = last_value - last_index - 1;
        else
            sequence[i] = last_value + last_index + 1;
        last_value = sequence[i], last_index = i;
    }

    for (int i = 0; i < n; i++)
        cout << sequence[i] << " ";

    return 0;
}
