#include <iostream>
#include <vector>

using namespace std;
// 1) objective function: f(i) is the cheapest path to reach the ith
// stair by making 1 to k steps
//
// 2) base case: f(0) = 1, f(1) = 1
//
// 3) recurrence relation: f(i) = f(i - 1) + f(i - 2) + ... + f(i - k)
//
// 4) order of computation: Bottom-up
//
// 5) location of the answer: f(n)

int paidStaircase(int n, vector<int> &prices) {
  int k = 2;
  vector<int> dp(n + 1, 0);
  vector<int> from(n + 1, -1);
  vector<int> path(n + 1, -1);

  dp[0] = prices[0];
  dp[1] = prices[1];
  from[0] = 0;
  from[1] = from[0];

  for (int i = 2; i <= n; ++i) {
    dp[i] =
        prices[i] + min(dp[i - 1], dp[i - 2]); // use recursion here to find the
                                               // min of the last k stairs
    if (dp[i - 2] < dp[i - 1]) {
      from[i - 1] = i - 2;
    } else {
      from[i - 1] = i - 1;
    }
  }

  cout << "--------------" << endl;
  for (int i = n; i > 0; i = from[i]) {
    path.insert(path.end(), i);
  }
  for (int i = 0; i < path.size(); ++i) {
    cout << path[i] << " ";
  }
  cout << "\n--------------" << endl;

  return dp[n];
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
  vector<int> prices = {0, 3, 2, 4, 6, 1, 1, 5, 3};
  cout << paidStaircase(8, prices);
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
