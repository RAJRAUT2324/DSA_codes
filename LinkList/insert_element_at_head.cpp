/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        // Code here
        if(head==NULL)
        {
            Node* newNode=new Node(x);
            newNode=head;
            
        }
        else
        {
             Node* newnode=new Node(x);
             newnode->next=head;
             head=newnode;
            
        }
    }
};

// You are given the head of a Singly Linked List and a value x, insert that value x at the beginning of the LinkedList and return the head of the modified Linked List.

// Examples :

// Input: x = 1,
    
// Output: 1 -> 2 -> 10
// Explanation: We can see that 1 is inserted at the beginning of the linked list.