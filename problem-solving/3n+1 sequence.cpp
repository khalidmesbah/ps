#include <iostream>
using namespace std;


void printSequence(int n) {
	cout << n << " ";
	if (n == 1) return;
	if (n % 2 == 0) printSequence(n / 2);
	else printSequence(3 * n + 1);
	

}

int main()
{
	printSequence(5);

	return 0;

}

// to print the length of the sequence
#include <iostream>
using namespace std;


int printSequence(int n) {
	if (n == 1) return 1;
	if (n % 2 == 0) return 1 + printSequence(n / 2);
	else return 1 + printSequence(3 * n + 1);
}

int main()
{
	cout << printSequence(6);

	return 0;

}
