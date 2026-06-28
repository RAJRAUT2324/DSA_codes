// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};Segregate Evens and Odds in a Linked List

*/
class Solution {
  public:
    Node* divide(Node* head) {
      vector<int>arr;
      Node* n=head;
      while(n!=NULL)
      {
          if(n->data%2==0)
          {
              arr.push_back(n->data);
          }
          n=n->next;
      }
      Node* n1=head;
      while(n1!=NULL)
      {
          if(n1->data%2!=0)
          {
              arr.push_back(n1->data);
          }
           n1=n1->next;
      }
      Node* newHead=NULL;
      Node* newHead1=NULL;
      for(int i=0;i<arr.size();i++)
      {
          Node* newnode=new Node(arr[i]);
          if(newHead==NULL)
          {
               newHead=newnode;
               newHead1=newHead;
          }
          else
          {
              newHead->next=newnode;
              newHead=newnode;
          }
         
      }
        return newHead1;
    }
};