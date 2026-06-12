/*
Problem: Plus One
LeetCode #: 66
Difficulty: Easy

Approach:
- Traverse the digits from right to left.
- Add 1 to the current digit.
- If the digit becomes less than 10, return the result immediately.
- Otherwise, set the digit to 0 and continue carrying.
- If all digits become 0 (e.g., 999), insert 1 at the beginning.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for (int i = digits.size() - 1; i >= 0; i--) {

            digits[i]++;

            if (digits[i] < 10) {
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};
