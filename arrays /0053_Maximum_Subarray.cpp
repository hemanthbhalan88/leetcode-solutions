/*
Problem: Maximum Subarray
LeetCode #: 53
Difficulty: Medium

Approach:
- Maintain the maximum subarray sum ending at the current index.
- Either extend the current subarray or start a new one.
- Track the overall maximum sum.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
