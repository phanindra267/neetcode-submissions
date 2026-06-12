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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        vector<ListNode*> Nodes;
        ListNode* cur=head;


        while(cur!=nullptr)
        {
            Nodes.push_back(cur);
            cur=cur->next;
        }
        int removeIndex=Nodes.size()-n;
        if(removeIndex==0)
        return head->next;
        Nodes[removeIndex-1]->next=Nodes[removeIndex]->next;
        return head;
    }
};
