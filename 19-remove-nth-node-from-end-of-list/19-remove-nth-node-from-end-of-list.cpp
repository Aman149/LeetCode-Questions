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
        
        while(curr != NULL) {
            curr = curr->next;
            size++;
        }
        
        if(size == 1) {
            return NULL;
        }
        
        if(size == n) {
            ListNode * temp = head;
            head = head->next;
            temp->next = NULL;
            return head;
        }
        
        curr = head;
        curr = curr->next;
        int i = size - n;
        while(curr != NULL && i>1) {
            curr= curr->next;
            prev = prev->next;
            i--;
        }
        
        prev->next = curr->next;
        
        return head;
        
    }
};