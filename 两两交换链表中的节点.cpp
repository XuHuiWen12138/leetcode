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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode *p = head;
        head = head->next;
        ListNode *q;
        ListNode * pre = nullptr;
        while(p){
            q = p->next;
            if(q == nullptr){
                return head;
            }
            p->next = q->next;
            q->next = p;
            if(pre!=nullptr){
                pre->next = q;
            }
            pre = p;
            p = p->next;
            
        }
        return  head;
    }
};