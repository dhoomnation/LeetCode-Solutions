/*approach
create a map to store number->index
traverse array.
for each element nums[i], calculate need
if need already exist in map, return it.
otherwise store current number and its index.
continue until pair is found.

*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
unordered_map<int,int>m;
for(int i=0;i<nums.size();i++){
    int need=target-nums[i];
    if(m.count(need)){
        return {m[need],i};
    }
    m[nums[i]]=i;
}
return {};
    }
};
