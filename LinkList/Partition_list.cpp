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
    ListNode* partition(ListNode* head, int x) {
        ListNode* fp=new ListNode(-1);
        ListNode* sp=new ListNode(-1);

        ListNode* fptail=fp;
        ListNode* sptail=sp;

        ListNode* temp=head;

        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                fptail->next= temp;
                fptail=fptail->next;
            }
            else
            {
                sptail->next= temp;
                sptail=sptail->next;
            }
            temp=temp->next;
        }
        fptail->next=sp->next;
        sptail->next=NULL;
        fp=fp->next;
        return fp;
    }
};

// Input: head = [1,4,3,2,5,2], x = 3
// Output: [1,2,2,4,3,5]
// Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

// You should preserve the original relative order of the nodes in each of the two partitions.