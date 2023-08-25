#include <iostream>
using namespace std;

int main()
{

	cout << "enter two numbers to swap them\n";
	int a, b, temp{0};
	cin >> a >> b;

	cout << "a: " << a << " b: " << b << endl;
	
	temp = a;
	a = b;
	b = temp;

	cout << "a: " << a << " b: " << b;

	return 0;
}
