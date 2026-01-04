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
 ListNode* reverseNumber(ListNode*& head)
  {
      ListNode* current=head;
      ListNode* prew=NULL;
      
      while(current!=NULL)
      {
          ListNode* forward=current->next;
          current->next=prew;
          prew=current;
          current=forward;
      }
      return prew;
  }
    ListNode* doubleIt(ListNode* head) {
         //reversing number
         head=reverseNumber(head);
         //logic to add one
         int carry=0;
         int sum=0;
         ListNode* temp=head;
         while(temp!=NULL)
         {
             sum=temp->val*2+carry;
             int digit=sum%10;
             temp->val=digit;
             carry=sum/10;
             if(carry!=0 && temp->next==NULL)
             {
                 ListNode* newnode=new ListNode(carry);
                 temp->next=newnode;
                 temp=newnode;
             }
             temp=temp->next;
         }
         head=reverseNumber(head);
         return head;
    }
};
// Input: head = [1,8,9]
// Output: [3,7,8]
// Explanation: The figure above corresponds to the given linked list which represents the number 189. Hence, the returned linked list represents the number 189 * 2 = 378.
// Example 2: