#include <iostream>
using namespace std;

int main()
{
	// /1000 => removes last 3 digits
	// %10 get next digit = 4th
	int n;
	cin >> n;
	cout << n / 1000 % 10;

	return 0;
}
