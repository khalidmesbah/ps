#include <iostream>
using namespace std;

void print_triangle(int n)
{
    if (n == 0)
        return;
    for (int i = 0; i < n; i++)
        cout << "*";
    cout << endl;
    print_triangle(--n);
}

int main()
{
    print_triangle(5);

    return 0;
}
