#include <iostream>
using namespace std;
// multivariables & multisteps
int main()
{
	for (int a = 0, b = 1, c = 2; a + b + c < 16; ++a, b += 2, c += 3)
		cout << a + b + c << " ";
	return 0;
}