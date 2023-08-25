// calculate power with recursive function
#include <iostream>
using namespace std;

int calcPower(int val, int pow) {
	if (pow == 0) return 1;
	return val * calcPower(val, pow - 1);
}

int main()
{
	cout << calcPower(2, 4);
	return 0;
}
