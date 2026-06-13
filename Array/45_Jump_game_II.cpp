/* approach:
farthest = farthest index reachable from all positions in the current jump range.
end = end of the current jump range.
Traverse the array (except the last element):
Update farthest = max(farthest, i + nums[i]).
When i == end, it means you've finished exploring the current jump range:
Take a jump (jump++).
Set end = farthest to define the next range.

time complexity:O(n)
space complexity:O(1)

*/
class Solution {
public:
    int jump(vector<int>& nums) {
      int farthest=0;//best reach
      int jump=0;
      int end=0;//end of current jumps reach range
      for(int i=0;i<nums.size()-1;i++){
    farthest=max(farthest,i+nums[i]);
    if(i==end){
        jump++;
        end=farthest;
    }
      }  
      return jump;
    }
};
