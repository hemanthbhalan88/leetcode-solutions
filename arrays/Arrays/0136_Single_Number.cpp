/*
Problem: Single Number
LeetCode #: 136
Difficulty: Easy

Approach:
- Use XOR operation.
- XOR of a number with itself is 0.
- XOR of a number with 0 is the number itself.
- Since every element appears twice except one, all duplicate numbers cancel out.
- The remaining value is the single number.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (auto x : nums) {
            ans ^= x;
        }

        return ans;
    }
};
