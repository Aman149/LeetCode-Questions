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
        ListNode *dummyHead = new ListNode(0); //It is dummy head to start
        ListNode *curr = dummyHead; // It iterates on dummy Head
        int carry = 0; 
        while(l1 != NULL || l2 != NULL) {
            int sum = 0; 
            // We check for L1 is NOT NULL
            if(l1 != NULL) {
                sum += l1->val;
                l1=l1->next;
            }

            // We check for L2 is NOT NULL
            if(l2 != NULL) {
                sum += l2->val;
                l2=l2->next;
            }
            // Calculate sum and carry
            sum = carry + sum;
            carry = sum / 10;
            //As dummy head has 0 now dummy head->next 
            // |0| -> |sum%10| -> |sum%10| 
            curr->next =  new ListNode(sum % 10);
            //to iterate curr 
            curr = curr->next;
            // we created a new node | NULL |
            // then we inserted value in new node | sum%10 |
            // now curr.next points to that new node
        }

        //if we have an extra carry left i.e 6+7 = 13 carry 1
        // We create a new node and store it
        if(carry > 0 ) {
            curr->next = new ListNode(carry);
        }

        return dummyHead->next; // return to our LL
        //       |0| -> |7| -> |0| -> |8| 
        // dummyHead -> curr = new Head 
    }
};