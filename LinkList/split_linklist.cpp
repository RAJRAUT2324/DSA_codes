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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        ListNode *size=head;
        int n=0;
        while(size!=NULL)
        {
            n++;
            size=size->next;
        }
        
        int parts=n/k;
        int remaining=n%k;

        ListNode* temp=head;

        vector<ListNode*>ans(k,nullptr); 
        for(int i=0;i<k && (temp!=nullptr);i++)
        {
            ans[i]=temp;
            int currentpartition=parts+(remaining-- >0?1:0); //here i done mistake
            for(int j=0;j<currentpartition-1;j++)            //remaining becomes infinite so i 
            {                                                //corrected using the condition
                temp=temp->next;
            }
            ListNode* forward=temp->next;
            temp->next=nullptr;
            temp=forward;
        }
        return ans;
    }
};

// Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list parts.

// The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null.

// The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later.

// Return an array of the k parts.

 

// Example 1:


// Input: head = [1,2,3], k = 5
// Output: [[1],[2],[3],[],[]]
// Explanation:
// The first element output[0] has output[0].val = 1, output[0].next = null.
// The last element output[4] is null, but its string representation as a ListNode is [].