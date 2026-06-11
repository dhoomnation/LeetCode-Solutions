/*Approach

Create two dummy lists:
small for nodes with value < x
large for nodes with value >= x
 Traverse the original linked list once.
 Append each node to the appropriate list while maintaining order.
 Connect the end of the small list to the start of the large list.
 Return the head of the small list (skipping the dummy node).

Complexity

Time complexity :O(n)
Space complexity:O(1)
*/

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
    ListNode smalldum(0), largedum(0);
    ListNode* small=&smalldum;
    ListNode* large=&largedum;
    while(head){
        if(head->val<x){
            small->next=head;
            small=small->next;
        }
        else{
            large->next=head;
            large=large->next;
        }
        head=head->next;
        }
      
    large->next=NULL;
    small->next=largedum.next;
return smalldum.next;
    }
};
