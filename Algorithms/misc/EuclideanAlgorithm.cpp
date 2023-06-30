// the Euclidean/Euclid's algorithm is used to find the highest/greatest common
// factor/divisor between two positive integers.

#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (a < 0 | b < 0)
    return 0;

  int c;
  while (b != 0) {
    c = a % b;
    a = b;
    b = c;
  }
  return a;
}

int main() {

  cout << gcd(-1, 60) << endl;
  cout << gcd(24, 60) << endl;
  cout << gcd(1005, 105) << endl;
  return 0;
}
