#include <iostream>
using namespace std;

int max(int a, int b, int c)
{
    return (max(max(a, b), c));
}
int max(int a, int b, int c, int d)
{
    return max(d, max(a, b, c));
}
int max(int a, int b, int c, int d, int e)
{
    return max(e, max(a, b, c, d));
}
int max(int a, int b, int c, int d, int e, int f)
{
    return max(f, max(a, b, c, d, e));
}
int main()
{
    cout << max(80, 2, 3, 9, 10, 11);
    return 0;
}