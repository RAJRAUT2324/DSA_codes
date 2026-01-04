/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,bool>visited;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(visited[temp]==true)
            {
                return temp;
            }
            else
            {
                visited[temp]=true;
                temp=temp->next;
            }
        }
        //agar yaha tak aa gaya matalab ki 
        //1->easame cycle nahi hai
        //2->no cycle and we have to return -1
        return NULL;
    }
};

// 142. Linked List Cycle II
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

// Do not modify the linked list.