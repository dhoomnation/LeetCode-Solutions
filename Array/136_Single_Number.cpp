/*
approach:
xor of number with self is 0 and xor of number with zero is 0.
traverse array and XoR all elements.
duplicate element will cancel out and hence get single unique number.

   time comp:o(n)
   space comp:o(1)
note: this complexity is mandatory for the Question. 
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int ans=0;
      for(int i=0;i<nums.size();i++){
        ans=ans^nums[i];
      }  
      return ans;
    }
};
