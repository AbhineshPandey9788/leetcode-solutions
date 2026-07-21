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
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        if(head == NULL || head->next == NULL){
            return head;
        }

        while(prev->next != NULL && prev->next->next != NULL){
            ListNode* first = prev->next;
            ListNode* sec = first->next;

            prev->next = sec;
            first->next = sec->next;
            sec->next = first;

            prev = first;
        }
        return dummy.next;
    }
};