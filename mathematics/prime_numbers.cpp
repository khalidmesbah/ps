#include <cmath>
#include <iostream>
using namespace std;

// prime numbers are natural numbers greater than 1 that only have 1 and
// themselves as factors composite numbers are numbers that can be factored into
// smaller integers.
//
// the integer 1 is not a prime number nor a composite number
// and it is called a negative numbers are not prime numbers
//
// a composite number is a positive integer that has at least one divisor other
// than 1 and itself.
//
// to reduce the number of divisors we check in the `prime1 function`, we use
// this trick: n = 1 * n = a * b = ... = sqrt(n) * sqrt(n) = ... = b * a = n * 1
//
// to improve more
// - test if n is even
// - test only odd divisors
//
// ## Notes
// - negative numbers are not prime
// - 1 is not prime
// - 2 is the only even prime number
// - the factors of an even number must be even
// - the factors of an odd number must be odd
// If n is a composite integer, then n has a prime divisor less than √n

bool isPrimeV1(int n) {
  if (n <= 1)
    return 0;
  for (int i = 2; i < n; i++)
    if (n % i == 0)
      return 0;
  return 1;
}

bool isPrimeV2(int n) {
  if (n <= 1)
    return 0;
  for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0)
      return 0;
  return 1;
}

bool isPrimeV3(int n) {
  // negative numbers and 1 are not prime
  if (n <= 1)
    return 0;
  // 2 is the only even prime number
  if (n == 2)
    return 1;
  // even numbers are not prime (except 2)
  if (n % 2 == 0)
    return 0;
  // if n is odd, check only odd divisors
  for (int i = 3; i <= floor(sqrt(n)); i += 2)
    if (n % i == 0)
      return 0;
  return 1;
}

int main() {
  cout << "===========================\n";
  for (int i = -1; i <= 100; i++) {
    if (isPrimeV3(i))
      cout << " *** " << i << " is a prime number\n";
    else
      cout << i << " is not a prime number\n";
  }

  cout << "\n===========================\n";
  return 0;
}
