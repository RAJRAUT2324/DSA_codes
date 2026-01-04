/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
      Node *temp=head;
      bool ans=false;
      while(temp!=NULL)
      {
          if(temp->data==key)
          {
              ans=true;
          }
          temp=temp->next;
      }
        return ans;
    }
};
