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
    ListNode* oddEvenList(ListNode* head) {
        if (!head) return nullptr;
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }

        ListNode*odd=NULL;
        ListNode*even=NULL;

        ListNode*todd=NULL;
        ListNode*teven=NULL;

        temp=head;
        for(int i=0;i<count;i++)
        {
            if(temp!=NULL)
            {
            if(i%2==0)
            {
                if(odd==NULL)
                {
                    odd=temp;
                    todd=temp;
                }
                else
                {
                    todd->next=temp;
                    todd=temp;
                }
                
            }
            else
            {
                 if(even==NULL)
                {
                    even=temp;
                    teven=temp;
                }
                else
                {
                    teven->next=temp;
                    teven=temp;
                }
            }
            }
            temp=temp->next;
        }
        if (teven) teven->next = nullptr;
        todd->next=even;
        return odd;
    }
};

// Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

// The first node is considered odd, and the second node is even, and so on.

// Note that the relative order inside both the even and odd groups should remain as it was in the input.

// You must solve the problem in O(1) extra space complexity and O(n) time complexity.

 

// Example 1:


// Input: head = [1,2,3,4,5]
// Output: [1,3,5,2,4]
// Example 2: