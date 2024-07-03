#include <bits/stdc++.h>
#include <iostream>
#include <strings.h>
#include <vector>
using namespace std;

class Solution {
public:
  void backtrack(vector<vector<int>> &res, vector<int> &nums,
                 vector<int> &permutation, vector<bool> &used) {

    // goal is reached
    if (permutation.size() == nums.size()) {
      res.push_back(permutation);
      return;
    }

    for (int i = 0; i < nums.size(); ++i) {
      if (!used[i]) {
        // make a choice
        used[i] = true;
        permutation.push_back(nums[i]);
        backtrack(res, nums, permutation, used);
        // undo the choice
        used[i] = false;
        permutation.pop_back();
      }
    }
  }

  vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> res;
    vector<bool> used(nums.size(), false);
    vector<int> permutation;
    backtrack(res, nums, permutation, used);
    return res;
  }
};

int main() {
  // your code goes here

  Solution sol;
  cout << "hi";
  vector<int> v = {1, 2, 3, 4, 5};
  // auto res = permutations(v);
  auto res = sol.permute(v);
  for (const vector<int> &a : res) {
    for (const auto &b : a)
      cout << b;
    cout << endl;
  }

  cout << "hi";

  return 0;
}
