/* 
approach:
traverse all gas stations once.
add gas[i]-cost[i] to : profit->overall fuel balance of trip
                      :tank->fuel balance from current start position.
if tank<0 cant reach i+1 from current start, set start=i+1 and reset tank =0.
after loop: if profit>=0 return start else -1.

time complexity:O(n)
space complexity:O(1)

*/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int profit=0;
      int tank=0;
      int start=0;
      for(int i=0;i<gas.size();i++){
       profit+=gas[i]-cost[i];
       tank+=gas[i]-cost[i];
       if(tank<0){
        start=i+1;
        tank=0;
       }
      } 
      if(profit>=0){ return start;}
      return -1;

    }
};
