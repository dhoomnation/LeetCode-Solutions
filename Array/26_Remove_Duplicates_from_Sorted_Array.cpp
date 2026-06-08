/*
approach:
since array sorted,duplicate element appear next to each other.
use 2 ptr: i keeps track of last unique elemnt and j scans array.
whenever nums[i] different from nums[j],a new unique element found.
move i forward and store nums[j]at nums[i].
after traversal,first i+1 elements contains all unique elements.
time complexity: O(n)
space complexity: O(1)
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;

    for(int j =1; j < nums.size(); j++){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
    }
};
