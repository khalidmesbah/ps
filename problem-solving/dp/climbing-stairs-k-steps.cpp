#include <iostream>
#include <vector>

using namespace std;
// 1) objective function: f(i) is the number of distinct ways to reach the ith
// stair by making 1 to k steps
//
// 2) base case: f(0) = 1, f(1) = 1
//
// 3) recurrence relation: f(i) = f(i - 1) + f(i - 2) + ... + f(i - k)
//
// 4) order of computation: Bottom-up
//
// 5) location of the answer: f(n)

int climbingStairsKSteps(int n, int k) {
  vector<int> dp(k, 0);

  // cout << "--------------" << endl;
  // for (int i = 0; i < dp.size(); ++i) {
  //   cout << i << " " << dp[i] << endl;
  // }
  // cout << "\n--------------" << endl;

  dp[0] = 1;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j < k; ++j) {
      if (i - j >= 0)
        dp[i % k] += dp[(i - j) % k];
    }
  }

  return dp[n % k];
}

int climbingStairs(int n) {
  vector<int> dp(n + 1, 0);

  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;

  for (int i = 3; i <= n; ++i) {
    dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
  }

  return dp[n];
}

int main() {
  climbingStairsKSteps(5, 3);
  // int n;
  // while (true) {
  //   cout << "Enter a number: ";
  //   cin >> n;
  //   cout << "Sum of first " << n
  //        << " numbers is: " << climbingStairsKSteps(n, 3) << endl;
  //   cout << "Sum of first " << n << " numbers is: " << climbingStairs(n)
  //        << endl;
  // }
  return 0;
}
