/*
Problem: Remove Element
LeetCode #: 27
Difficulty: Easy

Approach:
- Use a pointer 'k' to track the position where the next valid element should be placed.
- Traverse the array.
- If the current element is not equal to 'val', copy it to nums[k] and increment k.
- After processing all elements, k represents the new length of the array.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int k = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
