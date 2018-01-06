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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* pre = dummy;
        ListNode* cur = head;
        while(pre->next && pre->next->val < x) pre = pre->next;
        cur = pre;
        while(cur->next){
            if(cur->next->val < x){
                ListNode* tmp = cur->next;
                cur->next = tmp->next;
                tmp->mext = pre->next;
                pre->next = tmp;
            }
            else cur = cur->next;
        }
        return dummy->next;
    }
};