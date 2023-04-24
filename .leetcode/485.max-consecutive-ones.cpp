/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int maxi = 0;
        int maximum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                maxi++;
                maximum = max(maximum, maxi);
            }
            else
            {
                maxi = 0;
            }
        }

        return maximum;
    }
};
// @lc code=end
