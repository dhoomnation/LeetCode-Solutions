/*
  approach:
  create an ans array of n size.
  keep 2 indices:
  pos=0 for even posn & neg=1 for odd posn
  traverse array and if current element is +ve place at ans[pos] & inc pos by 2 and else same for neg.
  return ans array.
time comp:o(n)
space comp:0(n)

  */

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int n=nums.size();
       vector<int>ans(n);
       int pos=0,neg=1;
       for(int i=0;i<n;i++){
        if(nums[i]>0) {ans[pos]=nums[i];
        pos+=2;}
        else {ans[neg]=nums[i] ;
        neg+=2;
        }
       } 
       return ans;
    }
};
