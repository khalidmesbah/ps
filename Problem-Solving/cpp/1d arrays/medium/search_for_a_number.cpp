#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int Q;
    cin >> Q;
    int q[Q];
    for (int i = 0; i < Q; i++)
        cin >> q[i];

    int last_index{-1};
    for (int i = 0; i < Q; i++)
    {
        for (int j = 0; j < n; j++)
            if (q[i] == arr[j])
                last_index = j;
        cout << last_index << endl;
        last_index = -1;
    }

    return 0;
}
/*
5 1 2 7 3 7
3 7 9 2
 */