#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<vector<int>> obstacles) {
  int m = obstacles.size();
  int n = obstacles[0].size();
  vector<vector<int>> dp(m, vector<int>(n, 0));
  dp[0][0] = 1;

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (obstacles[i][j]) {
        dp[i][j] = 0;
        continue;
      }
      if (i - 1 >= 0)
        dp[i][j] += dp[i - 1][j];
      if (j - 1 >= 0)
        dp[i][j] += dp[i][j - 1];
    }
  }

  return dp[m - 1][n - 1];
}

int main() {
  vector<vector<int>> obstacles = {
      {0, 0},
  };
  cout << endl;
  cout << maxProfit(obstacles);
  cout << endl;
  return 0;
}
