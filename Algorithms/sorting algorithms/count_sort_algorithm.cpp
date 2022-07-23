//most efficient if values are small
// 0<=value<=500

#include <iostream>
using namespace std;

int main()
{

    int n, x, fre[501]{0};
    cin >> n;

    while (n--)
        cin >> x,
            fre[x]++;

    for (int i = 0; i < 501; i++)
        while (fre[i]--)
            cout << i << " ";

    return 0;
}
/*

13
1 5 5 2 5 7 2 3 3 3 5 2 7

*/
