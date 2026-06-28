/* 
approach:
simple approach is that iterate from l to r; 
extract every digit using % 10 and /10.
if any digit is 0 or doesnt divide original number exactly,reject it otherwise include in ans.

time comp:O(n)
space comop:O(1)
  */

class Solution {
public:

bool selfdivide(int temp){
    int n=temp;
    while(n>0){
        int digit=n%10;
        if(digit==0 || temp% digit !=0){
            return false;
        }
        n=n/10;
    }
    return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if (selfdivide(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
