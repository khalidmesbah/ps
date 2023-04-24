#include <iostream>
using namespace std;

void printTriangle_BaseDown(int n) {
	if (n != 0) {
		printTriangle_BaseDown(n - 1);
		for (int i = 0; i < n; i++) cout << "+";
		cout << endl;
	}
}

void printTriangle_BaseUp(int n) {
	if (n != 0) {
		for (int i = 0; i < n; i++) cout << "+";
		cout << endl;
		printTriangle_BaseUp(n - 1);
	}
}

int main()
{
	printTriangle_BaseDown(10);
	cout << endl;
	printTriangle_BaseUp(10);

	return 0;

}
