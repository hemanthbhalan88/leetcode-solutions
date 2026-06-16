/*
Problem: Valid Anagram
LeetCode #: 242
Difficulty: Easy

Approach:
- If the lengths are different, return false.
- Use a frequency array of size 26.
- Increment counts for characters in the first string.
- Decrement counts for characters in the second string.
- If all frequencies become zero, the strings are anagrams.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        vector<int> freq(26, 0);

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
