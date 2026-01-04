/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* solve(Node*& head) {
        if (head == NULL)
            return NULL;
        auto it = head;
        auto tail = it;
        while (it != NULL) {
            if (it->child) {
                auto tailofans = solve(it->child);
                auto temp = it->next;
                it->next = it->child;
                it->next->prev = it;
                it->child = NULL;
                if (temp != NULL) {
                    tailofans->next = temp;
                    temp->prev = tailofans;
                }
            }
            tail = it;
            it = it->next;
        }
        return tail;
    }
    Node* flatten(Node* head) {
        solve(head);
        return head;
    }
};

// 30. Flatten a Multilevel Doubly Linked List
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// You are given a doubly linked list, which contains nodes that have a next pointer, a previous pointer, and an additional child pointer. This child pointer may or may not point to a separate doubly linked list, also containing these special nodes. These child lists may have one or more children of their own, and so on, to produce a multilevel data structure as shown in the example below.

// Given the head of the first level of the list, flatten the list so that all the nodes appear in a single-level, doubly linked list. Let curr be a node with a child list. The nodes in the child list should appear after curr and before curr.next in the flattened list.

// Return the head of the flattened list. The nodes in the list must have all of their child pointers set to null.