#include <iostream>
#include <vector>
using namespace std;

// normal recursion
int fibonacci(int n) {
  if (n == 0)
    return 0;
  if (n <= 2)
    return 1;

  return fibonacci(n - 1) + fibonacci(n - 2);
}

// top-down dp (memoization + recursion)

int fibHelp(int n, vector<int> memo) {
  if (n == 0)
    return 0;
  if (n <= 2)
    return 1;

  if (memo[n] != -1) {
    return memo[n];
  } else {
    memo[n] = fibHelp(n - 1, memo) + fibHelp(n - 2, memo);
    return memo[n];
  }
}

int fibonacciTDDP(int n) {
  vector<int> memo(n + 1, -1);

  return fibHelp(n, memo);
}

// bottom-up dp (memoization + iteration) forward dynamic programming
int fibonacciBUDP_forward(int n) {
  vector<int> memo(n + 1, 0);
  memo[0] = 0;
  memo[1] = 1;

  for (int i = 2; i <= n; i++) {
    memo[i] = memo[i - 1] + memo[i - 2];
  }

  return memo[n];
}

// bottom-up dp (memoization + iteration) backward dynamic programming
int fibonacciBUDP_backward(int n) {
  vector<int> memo(n + 1, 0);
  memo[0] = 0;
  memo[1] = 1;

  for (int i = 1; i <= n; i++) {
    memo[i + 1] += memo[i];
    memo[i + 2] += memo[i];
  }

  return memo[n];
}

int main() {
  cout << "\nUsing recursion" << endl;
  cout << "fibonacci(6): " << fibonacci(6) << endl;
  cout << "fibonacci(0): " << fibonacci(0) << endl;
  cout << "\nUsing TDDP" << endl;
  cout << "fibonacciTDDP(6): " << fibonacciTDDP(6) << endl;
  cout << "fibonacciTDDP(0): " << fibonacciTDDP(0) << endl;
  cout << "\nUsing BUDP_forward" << endl;
  cout << "fibonacciBUDP_forward(6): " << fibonacciBUDP_forward(6) << endl;
  cout << "fibonacciBUDP_forward(0): " << fibonacciBUDP_forward(0) << endl;
  cout << "\nUsing BUDP_backward" << endl;
  cout << "fibonacciBUDP_backward(6): " << fibonacciBUDP_backward(6) << endl;
  cout << "fibonacciBUDP_backward(0): " << fibonacciBUDP_backward(0) << endl;
  return 0;
}
