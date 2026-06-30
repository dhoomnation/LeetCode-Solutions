/* 
  approach:
Extract each digit using % 10.
If any digit is 0 or num % digit != 0, return false; otherwise return true.

time comp:O(d) where d=no.of digits
space comp:O(1)
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
