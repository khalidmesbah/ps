#include <iostream>
#include <vector>

using namespace std;

int nSum(int n) {
  vector<int> dp(n + 1, 0);
  dp[0] = 0;
  for (int i = 1; i <= n; ++i) {
    dp[i] = dp[i - 1] + i;
  }
  return dp[n];
}

int main() {
  int n;
  while (true) {
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of first " << n << " numbers is: " << nSum(n) << endl;
  }
  return 0;
}
