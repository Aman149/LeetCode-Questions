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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st1, st2;
        
        while(l1) {
            st1.push(l1->val);
            l1 = l1->next;
        }

        while(l2) {
            st2.push(l2->val);
            l2 = l2->next;
        }
        
        int carry = 0, sum = 0, a, b;
        ListNode* head = NULL;
        while(!st1.empty() || !st2.empty() || carry) {
            if(!st1.empty()) {
                a = st1.top();
                st1.pop();
            }
            else
                a = 0;
            
             if(!st2.empty()) {
                b = st2.top();
                st2.pop();
            }
            else
                b = 0;
            
            sum = a+b+carry;
            carry = sum/10;
            ListNode* node = new ListNode(sum%10);
            node->next = head;
            head = node;                   
        }
        return head;
    }
};