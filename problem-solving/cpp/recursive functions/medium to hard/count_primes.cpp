#include <iostream>
using namespace std;

bool is_prime(int n, int i)
{
    // two is a prime number !!
    if (n == 2 || i == 1)
        return true;
    // importatnt note n <= 2 || n % i == 0 not n % i == 0|| n <= 2  because if n = 0,1,2 n%i will be problematic
    if (n < 2 || n % i == 0)
        return false;

    return 1 * is_prime(n, --i);
}
int count_primes(int start, int end)
{

    if (start > end || start + 1 == end)
        return 0;

    return is_prime(start + 1, start) + count_primes(start + 1, end);
}

int main()
{
    int n{7};
    // cout << is_prime(n, n - 1);
    cout << count_primes(0, 8) << endl;
    return 0;
}
