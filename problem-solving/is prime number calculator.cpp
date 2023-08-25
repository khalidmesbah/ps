#include <iostream>
using namespace std;

bool isPrime(int n);

int main()
{
    while(1)
    {
        int n;
        cin >> n;
        if (isPrime(n))
            cout << "Prime\n";
        else
            cout << "Not Prime\n";
    }
    return 0;
}

bool isPrime(int n)
{
    if (n == 1 ) return false;
    for (int i = 2; i < n- 1; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}


//factorial
#include <iostream>
using namespace std;
bool is_prime(int n)
{
    static int i{n};

    if (n == 2)
        return true;

    if (i % (n - 1) == 0)
        return false;

    return 1 * is_prime(--n);
}

int main()
{
    cout << is_prime(5) << endl;
    return 0;
}
