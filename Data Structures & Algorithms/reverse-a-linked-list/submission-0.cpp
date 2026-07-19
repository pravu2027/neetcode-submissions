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
        ListNode*Prev=NULL;
        ListNode*Curr=head;
        while(Curr !=NULL){
            ListNode*next = Curr -> next;
            Curr -> next =Prev;
            Prev = Curr;
            Curr = next;
        }
        return Prev;
    }
};
