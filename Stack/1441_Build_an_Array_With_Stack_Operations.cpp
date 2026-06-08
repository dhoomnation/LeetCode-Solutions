/*
approach:
read numbers from 1 onwards.
if current number is present in target, perform push.
otherwise,push followed by pop to discard it.
continue until last element of target reached.
why target.back()instead of n? =>
reason is simple, target.back() is last number we need to build target array.
after reaching it,target already complete ,so processing numbers beyond it is unnecessary.

*/
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
      vector<string>ans;
      int j=0;
      for(int i=1;i<=target.back();i++){
        if(i==target[j]){
            ans.push_back("Push");
            j++;
        }
        else{
            ans.push_back("Push");
            ans.push_back("Pop");        }
      }  
      return ans;
    }

};
