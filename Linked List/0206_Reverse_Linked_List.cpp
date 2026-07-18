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

/*
=========================================================
Problem: 206. Reverse Linked List

Approach 1: Iterative
Time Complexity: O(n)
Space Complexity: O(1)

Approach 2: Recursive
Time Complexity: O(n)
Space Complexity: O(n)   // recursion stack
=========================================================
*/

class IterativeSolution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr!=NULL){  
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }   
        return prev;
    }
};


//Solution 2 -- Recurrsive Approach

class RecursiveSolution{
public:
    ListNode* reverseList(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* newhead = reverseList(head->next);

        head->next->next = head;
        head->next = NULL;
        return newhead;
    }
};