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
 ListNode* getMiddle(ListNode* head) {
        // code here
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
 }
   ListNode* solve(ListNode*& head,ListNode*& current,ListNode*& prew)
  {
      //base case
      if(current==NULL)
      {
          return head;
      }
      ListNode* forward=current->next;
      current->next=prew;
      prew=current;
      current=forward;
      solve(head,current,prew);
      head=prew;
      return prew;
      
  }
    bool isPalindrome(ListNode* head) {
        //linked list ki length find karani hai
        int count=0;
        ListNode* cc=head;
        while(cc!=NULL)
        {
            count++;
            cc=cc->next;
        }
        //middle element findl karunga
        ListNode* mid=getMiddle(head);
        //even or odd string
        ListNode* finalmid=NULL;
        if(count & 1)
        {
            finalmid=mid->next;
        }
        else
        {
            finalmid=mid;
        }
        //reverse the linkedlist fron the middle
         ListNode* current=finalmid;
         ListNode* prew=NULL;
         ListNode* ans=finalmid;
         ans=solve(finalmid,current,prew);
         //now ans is the linked list headof the half list
         //now check it is pallidrome or not
         ListNode* temp=head;
         while(ans!=NULL)
         {
            if(temp->val!=ans->val)
            {
                return false;
            }
            temp=temp->next;
            ans=ans->next;
         }
         // yaha tak sab sahi chalato samajo its palidrome number
         return true;
    }
};

Code
// Testcase
// Testcase
// Test Result
// 234. Palindrome Linked List
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

 

Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false