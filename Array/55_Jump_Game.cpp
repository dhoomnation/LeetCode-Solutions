/*approach/intution:
while walking through array,continuously update farthest position reachable so far.
if you reachan index beyond that range,game is lost.
time comp:O(n)
space comp:O(1)
*/
class Solution {
public:
    bool canJump(vector<int>& nums) {
       int far=0;//keep track farthest which is max of (far,i+nums[i])
       for(int i=0;i<nums.size();i++){
       if(i>far) return false; 
       else far=max(far,i+nums[i]);
       } 
       return true;
    }
};
