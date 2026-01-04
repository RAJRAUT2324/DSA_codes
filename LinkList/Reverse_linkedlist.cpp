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
        ListNode* newHead=head;
        ListNode* temp=head;
        newHead=NULL;
      while(temp!=NULL)
      {
        if(newHead==NULL)
        {
            ListNode* newnode=new ListNode(temp->val);
            newHead=newnode;
            temp=temp->next;
        }
        else
        {
            ListNode* newnode=new ListNode(temp->val);
           newnode->next = newHead;
           newHead = newnode;
           temp=temp->next;
        }
      }
       return newHead;
    }
};

// Given the head of a singly linked list, reverse the list, and return the reversed list.