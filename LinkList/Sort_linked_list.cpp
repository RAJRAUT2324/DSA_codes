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
ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* newlist=new ListNode(-1);
        auto tail=newlist;
        while(list1!=NULL && list2!=NULL)
        {
            int val1=list1->val;
            int val2=list2->val;
            if(val1<=val2)
            {
                 ListNode* newnode=new ListNode(val1);
                 tail->next=newnode;
                 tail=newnode;
                 list1=list1->next;
            }
            else
            {
                 ListNode* newnode=new ListNode(val2);
                 tail->next=newnode;
                 tail=newnode;
                 list2=list2->next;
            }
        }
        if(list1!=NULL)
        {
            tail->next=list1;
            tail=list1;
        }
        if(list2!=NULL)
        {
            tail->next=list2;
            tail=list2;
        }
        return newlist->next;
    }
    //middle finding
    ListNode* findmid(ListNode* head)
    {
        auto fast=head->next;
        auto slow=head;
        auto temp=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }


    ListNode* sortList(ListNode* head) {
      //base condition
      if(head==NULL || head->next==NULL)
      {
        return head;
      }
      ListNode* mid=findmid(head);
      ListNode* left=head;
      ListNode* right=mid->next;
      mid->next=NULL;
      
      //recurtion
      left=sortList(left);
      right=sortList(right);

      //merge both algoritham
      ListNode*ans=merge(left,right);
      return ans;

    }
};