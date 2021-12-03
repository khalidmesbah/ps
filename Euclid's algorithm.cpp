// the Euclidean/Euclid's algorithm is used to the highest/greatest common factor/divisor between to numbers.


#include<iostream>
using namespace std;

int gcd(int a,int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {


	cout << gcd(24,60);
	return 0;
}

