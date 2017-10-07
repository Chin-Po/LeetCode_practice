/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = new ListNode(0);
        ListNode *p1 = l1, *p2 = l2, *p3 = sum;
        int carry = 0;
        while(p1 != NULL || p2 != NULL){
            if(p1 != NULL) {
                carry = carry + p1->val;
                p1 = p1->next;
            }
            if(p2 != NULL){
                carry = carry + p2->val;
                p2 = p2->next;
            }
            p3->next = new ListNode(carry % 10);
            p3 = p3->next;
            carry = carry / 10;
        }
        if(carry == 1)
            p3->next = new ListNode(carry);
        return sum->next;
    }
};