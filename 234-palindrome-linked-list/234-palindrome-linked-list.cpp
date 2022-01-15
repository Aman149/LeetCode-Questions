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
    ListNode *frontPtr;
    
    bool recursiveCheck(ListNode *curr) {
        
        if(curr != NULL) {
            if(recursiveCheck(curr->next) == false)
                return false;
            if(curr->val != frontPtr->val)
                return false;
            frontPtr = frontPtr->next;
        }
        return true;
    }
    
public:
    bool isPalindrome(ListNode* head) {
        frontPtr = head;
        return recursiveCheck(head);
    }
};