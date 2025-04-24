#include <iostream>
#include <vector>

using namespace std;
// 1) objective function: f(i) is the number of distinct ways to reach the ith
// step 2) base case: f(0) = 0, f(1) = 1, f(2) = 2
// 3) recurrence relation: f(i)
// = f(i - 1) + f(i - 2)
// 4) order of computation: 0, 1, 2, ..., n
// 5) location of
// the answer: f(n)

int climbingStairsK3(int n) {
  int a = 1;
  int b = 1;
  int c = 2;
  int d;

  for (int i = 3; i <= n; ++i) {
    d = a + b + c;
    a = b;
    b = c;
    c = d;
  }

  return d;
}

int climbingStairsK2(int n) {
  int a = 1;
  int b = 1;
  int c;

  for (int i = 2; i <= n; ++i) {
    c = a + b;
    a = b;
    b = c;
  }

  return c;
}

int climbingStairs(int n) {
  vector<int> dp(n + 1, 0);
  dp[0] = 1;
  dp[1] = 1;

  for (int i = 2; i <= n; ++i) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  return dp[n];
}

int main() {
  int n;
  while (true) {
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of first " << n << " numbers is: " << climbingStairsK2(n)
         << endl;
  }
  return 0;
}
