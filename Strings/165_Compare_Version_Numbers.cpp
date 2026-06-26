/* approach:
use 2 pointer to traverse both version.
extract current revision number from each version until . or end of string.
convert each revision into integer.
compare and return.

time comp:O(m+n)
space comp:O(n)



  */

class Solution {
public:
    int compareVersion(string version1, string version2) {
      int i=0,j=0;
      int m=version1.size(),n=version2.size();  
      while(i<m || j<n){
 long long nums1=0,nums2=0;  

        while(i<m && version1[i]!='.'){
            nums1=nums1*10+version1[i]-'0';
            i++;
        }
        while(j<n && version2[j]!='.'){
            nums2=nums2*10+version2[j]-'0';
            j++;
        }
      
      if(nums1>nums2) return 1;
      if(nums2>nums1) return -1;
      i++;j++;
      }
      return 0;
    }
};
