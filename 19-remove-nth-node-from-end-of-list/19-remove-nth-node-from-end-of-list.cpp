class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode;
        dummy-> next = head;
        ListNode *ptr1 = dummy, *ptr2 = dummy,*prev = dummy;
        ptr1 = ptr1 -> next;
        for(int i = 0; i < n; i++){
            ptr2 = ptr2 -> next;
        }
        while(ptr2 -> next){
            prev = ptr1;
            ptr1 = ptr1 -> next;
            ptr2 = ptr2 -> next;
        }
        prev -> next = ptr1 -> next;
        ptr1 -> next = NULL;
        return dummy -> next;
    }
};