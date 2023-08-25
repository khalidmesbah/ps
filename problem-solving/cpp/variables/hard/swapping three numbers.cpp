#include <iostream>
using namespace std;

int main()
{

	cout << "enter two numbers to swap them\n";
	int a, b, c, temp;
	cin >> a >> b >> c;

	cout << "a: " << a << " b: " << b << " c: " << c << endl;

	temp = a;
	a = b;
	b = c;
	c = temp;

	cout << "a: " << a << " b: " << b << " c: " << c;

	return 0;
}
