class Solution {
public:
    void deleteNode(ListNode* node) {
        while (node->next->next != NULL) {
            node->val = node->next->val;
            node = node->next;
        }
        
        node->val = node->next->val;

        ListNode* temp = node->next;
        node->next = NULL;
        delete temp;
    }
};
// Input: head = [4,5,1,9], node = 5
// Output: [4,1,9]
// Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.