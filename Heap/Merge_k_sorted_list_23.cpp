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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>arr;
        ListNode* l=new ListNode(1);
        ListNode* head=l;
        

        for(auto x : lists)
        {
            ListNode* temp=x;
            while(temp!=NULL)
            {
                arr.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(arr.begin(),arr.end());

        for(int i=0;i<arr.size();i++)
        {
         ListNode* temp=new ListNode(arr[i]);
         l->next=temp;
         l=temp;
        }
       return head->next;
    }
};