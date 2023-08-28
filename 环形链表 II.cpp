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
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr||head->next==nullptr||head->next->next==nullptr){
            return nullptr;
        }
        ListNode* Fast = head->next->next;
        ListNode* Slow = head->next;
        while(Fast != Slow){
            if(Fast->next == nullptr||Fast->next->next == nullptr){
                return nullptr;
            }
            Fast = Fast->next->next;
            Slow = Slow->next;
        }
        Fast = head;
        while(Fast!=Slow){
            Fast = Fast->next;
            Slow = Slow->next;
        }
        return Fast;
    }
};