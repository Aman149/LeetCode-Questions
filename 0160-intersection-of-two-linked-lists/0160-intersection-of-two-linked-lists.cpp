/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    int length(ListNode *head) {
        int len = 0;
        
        while(head != NULL) {
            head = head->next;
            len++;
        }
        
        return len;
    }
    
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        //Base Case
        if(!headA || !headB)
            return NULL;
        
        int lenA = length(headA);
        int lenB = length(headB);
        
        //If length of A is greater
        if(lenA > lenB) {
            while(lenA >lenB) {
                headA = headA -> next;
                lenA--;
            }
        }
        
        //If length of B is greater
        if(lenB > lenA) {
            while(lenB > lenA) {
                headB = headB -> next;
                lenB--;
            }
        }
        
        //Final step to find the intersecting element
        while(headA && headB) {
            if(headA == headB)
                return headA;
            headA = headA -> next;
            headB = headB -> next;
        }
        
        return NULL;
     }
};