/*
approach:
whenever a new binary digit arrives, multiply previous ans by 2 & add current digit.

time comp:O(n)
space comp:O(1)

  */

class Solution {
public:
    int getDecimalValue(ListNode* head) {
     int ans=0;
     while(head!=NULL){
        ans=ans*2+head->val;
        head=head->next;
     }   
     return ans;    
    }
};
