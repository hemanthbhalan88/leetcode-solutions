/*
Problem: Two Sum
LeetCode #: 1
Difficulty: Easy

Approach:
- Check every possible pair of elements.
- If the sum of a pair equals the target, return their indices.
- Guaranteed to have exactly one solution.

Time Complexity: O(n²)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {

            for (int j = i + 1; j < n; j++) {

                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};
