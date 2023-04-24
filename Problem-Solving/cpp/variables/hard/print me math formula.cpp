	#include <iostream>
	using namespace std;

	int main()
	{

		cout << "enter a and b(-1 or 1)\n";
		int a, b;
		cin >> a >> b;

		cout << (1 + b) / 2 * a * a + (2 * a + 1) * (b - 1) / -2;
		return 0;
	}
