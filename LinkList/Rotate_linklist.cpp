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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL)
        {   count++;
            temp=temp->next;
        }
        int newk=k%count;
        if(count==newk || newk==0) return head;
        int length=count-newk-1;
        ListNode* last=head;
        ListNode* newhead=head;
        for(int i=0;i<length;i++)
        {
          last=last->next;
        }
        newhead=last->next;
        last->next=NULL;
        ListNode* base=newhead;
        while(base->next!=NULL)
        {
            base=base->next;
        }
        base->next=head;
        return newhead;
       
    }
};

// Given the head of a linked list, rotate the list to the right by k places.

 

// Example 1:


// Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]