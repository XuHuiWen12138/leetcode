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
        if(head->next == nullptr){
            return nullptr;
        }
        ListNode*p = head;
        ListNode*q = head;
        for(int i = 0;i<n-1;i++){
            q = q->next;
        }
        ListNode*pre=nullptr;
        while(q->next){
            pre = p;
            p = p->next;
            q = q->next;
        }
        if(pre){
            pre->next = p->next;
        }else{
            head=head->next;
        }
        
        return head;
    }
};