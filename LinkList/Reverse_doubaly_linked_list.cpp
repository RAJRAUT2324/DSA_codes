/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node*newlink=new Node(-1);
        Node*newtail=newlink;
        Node*temp=head;
        Node*tail=head;
        while(temp!=NULL)
        {
            tail=temp;
            temp=temp->next;
        }
        while(tail!=NULL)
        {
            Node*newnode=new Node(tail->data);
            newtail->next=newnode;
            newtail=newnode;
            tail=tail->prev;
        }
        return newlink->next;
    }
};