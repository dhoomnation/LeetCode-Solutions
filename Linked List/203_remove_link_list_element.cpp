/*
approach:
create a dummy node before head.
keep pointer at dummy node.
traverse . if value matches skip that node.
otherwise move forward.
return dummy.next.

time comp: o(n)
space comp:o(1)

  */


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
     ListNode dummy(0);
     dummy.next=head;
     ListNode* curr=&dummy;
     while(curr->next!=NULL){
        if(curr->next->val==val){
            ListNode* temp=curr->next;
            curr->next=curr->next->next;
            delete temp;

        }
        else curr=curr->next;
     }
     return dummy.next;

    }
};
