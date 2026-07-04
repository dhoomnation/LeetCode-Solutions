/*
approach:
find Total sum first.
Then find right sun and next left sum . when both left sun=right sum,we got our required index.

time comp: O(n)


  */

Class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int ts=0;
        for(int i=0;i<nums.size();i++)
            ts+=nums[i];

int ls=0;
        for(int i=0;i<nums.size();i++){
            int rs=ts-ls-nums[i];
            if(ls==rs) return i;
            ls+=nums[i];
        }
    return -1;
    }
};
