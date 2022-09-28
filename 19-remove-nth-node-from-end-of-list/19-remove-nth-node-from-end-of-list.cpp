/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head, *prev = head;
        int size = 0;
        
        //TO find the size of the LL
        while(curr != NULL) {
            curr = curr->next;
            size++;
        }
        
        //Case 1 when only one element is present in LL
        if(size == 1)
            return NULL;
        
        //Case 2, If the element we want to remove is the
        //first element of the LL
        if(size == n) {
            ListNode *temp = head;
            head = head->next;
            temp->next = NULL;
            return head;
        }
        
        //Case 3, If the element is present in the LL
        //excluding the 1st position i.e. n != size of LL
        //That means we have to iterate and find the element that
        //wa have to remove, for this we can use tho 2 pointer approach
        curr = head;
        curr = curr->next;
        int i = size-n;
        while(curr != NULL && i > 1) {
            curr = curr->next;
            prev = prev->next;
            i--;
        }
        //Now curr stores the element that we want to remove
        //And prev stores the previous element
        prev->next = curr->next;
        
        return head;
    }
};