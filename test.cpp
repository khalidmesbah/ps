#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> res;
    map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
      int element = nums[i];
      int complement = target - element;
      if (mp.find(complement) != mp.end()) {
        cout << "The target " << element << " + " << complement << " = "
             << target << endl;
        return {mp[complement], i};
      }
      mp[element] = i;
    }

    return res;
  }
};

vector<int> arr;
int target;

int main() {
  Solution sol;

  // 1
  // 2
  arr = {2, 7, 11, 15};
  target = 9;
  arr = {3, 2, 4};
  target = 6;
  // 3

  vector<int> res = sol.twoSum(arr, target);

  cout << endl << "The solution is" << endl;
  for (auto x : res) {
    cout << x << " ";
  }

  return 0;
}
