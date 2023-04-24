#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	bool is_even_using_modulus_2{n % 2 == 0};
	bool is_even_using_modulus_10{n % 10 == 0 || n % 10 == 2 || n % 10 == 4 || n % 10 == 6 || n % 10 == 8};
	bool is_even_using_division_2{(double(n) / 2 - n / 2) == 0};

	cout << is_even_using_modulus_2 << endl;
	cout << is_even_using_division_2 << endl;
	cout << is_even_using_modulus_10 << endl;

	return 0;
}
