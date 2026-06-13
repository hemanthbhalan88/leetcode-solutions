/*
Problem: Contains Duplicate
LeetCode #: 217
Difficulty: Easy

Approach:
- Sort the array.
- After sorting, duplicate elements will be adjacent.
- Traverse the array and check if any element is equal to its previous element.

Time Complexity: O(n log n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }

        return false;
    }
};
