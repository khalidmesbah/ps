#include <iostream>
#include <vector>

using namespace std;

int coinChange(vector<int> coins, int amount) {
  vector<int> dp(amount + 1, -1);

  dp[0] = 0;

  return dp[amount];
};
int main() {
  cout << coinChange({2}, 3);
  cout << coinChange({1}, 0);
  cout << coinChange({1, 2, 5}, 11);

  return 0;
}
