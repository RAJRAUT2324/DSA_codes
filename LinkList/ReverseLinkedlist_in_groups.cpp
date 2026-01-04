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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL && count<k)
        {
            count++;
            temp=temp->next;
        }
        if(count==k)
        {
            ListNode* prew=NULL;
            ListNode* current=head;
            ListNode* forward=NULL;
            int i=0;
            while(i<k)
            {
                forward=current->next;
                current->next=prew;
                prew=current;
                current=forward;
                i++;
            }
            ListNode* rrhead= reverseKGroup(forward,k);
            head->next=rrhead;
            return prew;
        }
        else
        {
            return head;
        }
    }
};

// Reverse Nodes in k-Group
// Solved
// Hard
// Topics
// premium lock icon
// Companies
// Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

// You may not alter the values in the list's nodes, only nodes themselves may be changed.