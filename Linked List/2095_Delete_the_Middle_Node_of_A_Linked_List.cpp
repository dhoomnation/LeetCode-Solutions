/*
  approach:
  find the middle node using flyod circle algorithm
  after finding middle,then delete it simply.
  time comp: O(n)
  space comp:O(1)
  */

class Solution {
public:

ListNode* middle(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast !=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL|| head->next==NULL) return NULL;
        ListNode* mid=middle(head);
        ListNode* temp=head;
        while(temp->next!=mid){
            temp=temp->next;
        }
        temp->next=mid->next;
        delete mid;
        return head;
    }
};
