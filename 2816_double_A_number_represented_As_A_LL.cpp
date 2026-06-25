/* approach:
first reverse the number.
traverse link list. calculate sum and update carry and append carry wherever requirement.
then again reverse at the end to get original link list.

time comp:O(n)
space comp:O(1)
  */

class Solution {
public:
ListNode* reverse(ListNode* head){
    ListNode* prev=NULL;
    ListNode* curr=head;
    while(curr){
        ListNode* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

    ListNode* doubleIt(ListNode* head) {
        head=reverse(head);
        ListNode* curr=head;
         ListNode* prev=NULL;
        int carry=0;
        while(curr){
int sum=curr->val*2+carry;
curr->val=sum%10;
carry=sum/10;

prev=curr;
curr=curr->next;

        }
        if(carry){
           prev->next= new ListNode(carry);
        }
      return reverse(head);
    }
};
