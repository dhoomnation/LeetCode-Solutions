/* 
  approach:
  x ^ y  →  count set bits
  */

class Solution {
public:
    int hammingDistance(int x, int y) {
      int num=x^y;
      int ct=0;
      while(num){
        if(num & 1){
            ct++;}

            num>>=1;
        

      }  
      return ct;
    }
};
