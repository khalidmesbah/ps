#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    int len1 = nums1.size();
    int len2 = nums2.size();

    vector<int> ans(len1, -1);

    for (int i = 0; i < len1; ++i) {
      for (int j = 0; j < len2; ++j) {
        if (nums1[i] == nums2[j]) {
          for (int k = j + 1; k < len2; ++k) {
            if (nums2[k] > nums2[j]) {
              ans[i] = nums2[k];
              break;
            }
          }
        }
      }
    }

    return ans;
  }
};

int main() {
  Solution sol;
  vector<int> v1 = {4, 1, 2};
  vector<int> v2 = {1, 3, 4, 2};
  auto res = sol.nextGreaterElement(v1, v2);

  for (int i = 0; i < res.size(); ++i) {
    cout << res[i] << " ";
  }
  return 0;
}
