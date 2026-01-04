class Solution {
public:
  Node *linkdelete(Node *head, int n, int m) {
    Node *current = head;
    while (current) {
      for (int i = 1; i < m && current != nullptr; i++) {
        current = current->next;
      }

      if (current == nullptr)
        break;

      Node *temp = current->next;
      for (int i = 0; i < n && temp != nullptr; i++) {
        Node *nextNode = temp->next;
        delete temp;
        temp = nextNode;
      }

      current->next = temp;
      current = temp;
    }
    return head;
  }
};

// You are provided with a singly linked list. The task is to modify this linked list in such a way that you start from the head of the list, skip the first 'm' nodes, and then delete the next 'n' nodes. You should repeat this process until you reach the end of the list.

// For example, consider the linked list with elements [1, 2, 3, 4, 5, 6, 7, 8, 9], with m = 2 and n = 3. Perform the following steps:

// Skip the first 2 nodes ([1, 2])
// Delete the following 3 nodes ([3, 4, 5])
// Skip the next 2 nodes ([6, 7])
// Delete the next 3 nodes ([8, 9])
// After these operations, the modified linked list should be [1, 2, 6, 7].

// This problem tests your ability to manipulate linked list pointers and manage node deletion and retention carefully.

// Example 1:

// Input:

// head = [1, 2, 3, 4, 5, 6, 7, 8, 9], m = 2, n = 2

// Output:

// [1, 2, 5, 6, 9]
// Explanation:After skipping 2 nodes, delete the next 2 nodes, then repeat.