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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        ListNode* prew=head;
        ListNode* current=head->next;
        while(current!=NULL)
        {
            
            if(prew->val!=current->val)
            {
             prew=prew->next;
             current=current->next;
            }
            else
            {
                prew->next=current->next;
                current->next=NULL;
                delete current;
                current=prew->next;
            }
        }
            return head;
    }
};

// Input: head = [1,1,2]
// Output: [1,2]
// Example 2: