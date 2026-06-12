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
      ListNode* prev = nullptr;       // previous node
        ListNode* curr = head;          // current node
        ListNode* next = nullptr;       // next node

        while (curr != nullptr) {
            next = curr->next;          // store next node
            curr->next = prev;          // reverse the link
            prev = curr;                // move prev forward
            curr = next;                // move curr forward
        }

        return prev;                      
    }
};
