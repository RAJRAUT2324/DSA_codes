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
ListNode* solve(ListNode* head,ListNode* temp)
{
    if(head==NULL)
    {
        return temp;
    }
    ListNode* newnode=new ListNode(head->val);
    if(temp==NULL) 
    {
        temp=newnode;
    }else
    {
        newnode->next=temp;
        temp=newnode;
    }
    
   ListNode* a=solve(head->next,temp);
   return a;
}
    bool isPalindrome(ListNode* head) {
        ListNode*temp=NULL;
        ListNode* t=head;
        ListNode* ans=solve(head,temp);
        while(head!=NULL)
        {
            if(head->val!=ans->val)
            {
                return false;
            }
            head=head->next;
            ans=ans->next;
        }
        return true;
    }
};