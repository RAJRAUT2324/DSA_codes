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
        //for head we solve it
        if(head->next==NULL || head==NULL)
        {
            return NULL;
        }
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        if(n==count)
        {
            head=head->next;
            return head;
        }
        temp=head;
        for(int i=0;i<count-n-1;i++)
        {
           temp=temp->next;
        }

        ListNode* prew=temp;
        ListNode* mid=prew->next;
        ListNode* next=mid->next;
        prew->next=next;
        return head;
    }
};
// 19. Remove Nth Node From End of List
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// Given the head of a linked list, remove the nth node from the end of the list and return its head.
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Example 2:

// Input: head = [1], n = 1
// Output: []
// Example 3:

// Input: head = [1,2], n = 1
// Output: [1]
 

// Constraints: