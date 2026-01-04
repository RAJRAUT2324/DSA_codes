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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
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
};

// 21. Merge Two Sorted Lists
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

 

// Example 1:


// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]