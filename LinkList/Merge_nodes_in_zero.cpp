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
  ListNode *mergeNodes(ListNode *head) {
    if (head == NULL)
      return NULL;
    ListNode *temp = head;
    ListNode *newlink = new ListNode(-1);
    ListNode *tail = newlink;
    int sum = 0;
    temp = temp->next;
    while (temp != NULL) {
      if (temp->val == 0) {
        if (sum != 0) {
          ListNode *newnode = new ListNode(sum);
          tail->next = newnode;
          tail = newnode;
        }

        sum = 0;
      } else {
        sum = sum + temp->val;
      }
      temp = temp->next;
    }
    return newlink->next;
  }
};

// Input: head = [0,3,1,0,4,5,2,0]
// Output: [4,11]