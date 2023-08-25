#include <iostream>
using namespace std;

void print_triangle(int n)
{
    if (n == 0)
        return;

    print_triangle(n - 1);

    for (int i = 0; i < n; i++)
        cout << "*";
    cout << endl;
}
int main()
{
    print_triangle(5);
    return 0;
}
