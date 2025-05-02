#include <iostream>
#include <vector>

using namespace std;

int coinChange(int n, int t, vector<int> denominations) {
  vector<int> dp(n + 1, 0);

  dp[0] = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < denominations.size(); j++) {
      if (i - denominations[j] >= 0) {
        dp[i] += dp[i - denominations[j]];
      }
    }
  }

  return dp[n];
}

int main() {
  cout << coinChange(10, 9, {1, 3, 5, 10});

  return 0;
}
