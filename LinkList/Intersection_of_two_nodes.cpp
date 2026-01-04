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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
       auto temp = headA;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        auto temp1 = headB;
        int count2 = 0;
        while (temp1 != NULL) {
            count2++;
            temp1 = temp1->next;
        }
        if(count>count2)
        {
            for(int i=0;i<count-count2;i++)
            {
                headA=headA->next;
            }
        }
        else
        {
             for(int i=0;i<count2-count;i++)
            {
                headB=headB->next;
            }
        }
        while(headA!=NULL && headB!=NULL)
        {
             if (headA == headB)
              return headA;

            headA=headA->next;
            headB=headB->next;
        }
       return NULL;
    }
};

// Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
// Output: Intersected at '8'
// Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).
// From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.
// - Note that the intersected node's value is not 1 because the nodes with value 1 in A and B (2nd node in A and 3rd node in B) are different node references. In other words, they point to two different locations in memory, while the nodes with value 8 in A and B (3rd node in A and 4th node in B) point to the same location in memory.
// Example 2: