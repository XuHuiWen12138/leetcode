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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode*p = head;
        ListNode*q = p->next;
        ListNode*v ;
        p->next = nullptr;
        while(q){
            v = q->next;
            q->next = p;
            p = q;
            q = v;
        }
        return p;
    }
};