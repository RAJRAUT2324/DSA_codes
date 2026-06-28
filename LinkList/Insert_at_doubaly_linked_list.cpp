/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
        
        
        Insertion at doubly linked list

    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
       if(head==NULL)
       {
           if(p==0)
           {
               return new Node(x);
           }
           else
           {
               return head;
           }
       }
       else
       {
           Node* temp=head;
           for(int i=0;i<p;i++)
           {
               temp=temp->next;
           }
           Node* newNode=new Node(x);
           newNode->next=temp->next;
           temp->next=newNode;
           newNode->prev=temp;
           if(newNode->next!=NULL)
           newNode->next->prev=newNode;
       }
       return head;
    }
};