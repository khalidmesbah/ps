#include <iostream>
using namespace std;

int main()
{

	int n;
	cin >> n;

	double is_even{n / 2.0 - n / 2}; // either 0 or 0.5

	// a formula to assign either 7 or 100 to (res) dependent on (is_even) value
	int res{(is_even / .5) * 7 + ((.5 - is_even) / .5) * 100};

	cout << res << endl;

	// another solution
	// int n;
	// cin >> n;

	// int is_even = n % 2 == 0;
	// int is_odd = 1 - is_even;

	// // formula of 2 parts: only one of them will be activated
	// int result = is_even * 100 + is_odd * 7;

	// cout << result << "\n";

	return 0;
}
