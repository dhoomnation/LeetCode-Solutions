/* 
approach:
traverse link list and swap every 2 adjacent nodes ny changing nodes(not values).
time comp:O(n)
space comp:O(1)
*/
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
       ListNode* dummy=new ListNode(0);
       dummy->next=head;
       ListNode* prev=dummy;
       while(prev->next && prev->next->next){
        ListNode* first=prev->next;
        ListNode* sec=first->next;

        first->next=sec->next;
        sec->next=first;
        prev->next=sec;
        prev=first;
       }
       return dummy->next;
        
    }
};9
