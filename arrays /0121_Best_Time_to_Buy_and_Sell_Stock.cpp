/*
Problem: Best Time to Buy and Sell Stock
LeetCode #: 121
Difficulty: Easy

Approach:
- Track the minimum stock price seen so far.
- For each day, calculate the profit if sold on that day.
- Update the maximum profit whenever a better profit is found.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = prices[0];
        int profit = 0;

        for (int i = 0; i < prices.size(); i++) {

            if (prices[i] < buy) {
                buy = prices[i];
            }
            else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }

        return profit;
    }
};
