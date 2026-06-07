/*
approach:
Use a monotonic stack to keep track of indices whose discount has not been found yet.
Traverse the array, and whenever the current price is less than or equal to the price at the index on top of the stack, apply the discount and pop that index. 
Push the current index onto the stack. The modified array contains the final prices.

Time Complexity: O(n)
Space Complexity: O(n)
  */

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>s;
        for(int i=0;i<prices.size();i++){
            while(!s.empty() && prices[s.top()]>=prices[i]){
                prices[s.top()]-=prices[i];
                s.pop();
            }
            s.push(i);
        }
        return prices;
    }
};
