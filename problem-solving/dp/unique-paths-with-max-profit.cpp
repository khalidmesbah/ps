#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> getPath(vector<vector<int>> dp, int i, int j,
                            vector<vector<int>> path) {

  if (i == 0 && j > 0) {
    path = getPath(dp, i, j - 1, path);
  } else if (j == 0 && i > 0) {
    path = getPath(dp, i - 1, j, path);
  } else if (i > 0 && j > 0) {
    if (dp[i - 1][j] > dp[i][j - 1]) {
      path = getPath(dp, i - 1, j, path);
    } else {
      path = getPath(dp, i, j - 1, path);
    }
  }

  path.insert(path.end(), {i, j});
  return path;
}

int maxProfit(vector<vector<int>> grid) {
  int m = grid.size();
  int n = grid[0].size();
  vector<vector<int>> dp(m, vector<int>(n, 0));

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i > 0 && j > 0) {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
      } else if (i > 0) {
        dp[i][j] = dp[i - 1][j] + grid[i][j];
      } else if (j > 0) {
        dp[i][j] = dp[i][j - 1] + grid[i][j];
      }
    }
  }

  vector<vector<int>> path;
  path = getPath(dp, m - 1, n - 1, path);

  for (int i = 0; i < path.size(); ++i) {
    for (int j = 0; j < path[0].size(); ++j) {
      cout << path[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}

int main() {
  vector<vector<int>> grid = {
      {0, 2, 2, 1}, {3, 1, 1, 1}, {4, 4, 2, 0} // 13
  };
  vector<vector<int>> grid2 = {
      {0, 2, 2, 50}, {3, 1, 1, 100}, {4, 4, 2, 0} // 154
  };
  cout << endl;
  cout << maxProfit(grid);
  cout << endl;
  return 0;
}
