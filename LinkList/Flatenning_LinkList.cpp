/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node *flatten(Node *root) {
        vector<int>arr;
      Node* temp=root;
      Node* dupp=root;
      
      while(temp!=NULL && dupp!=NULL)
      {
          
          arr.push_back(temp->data);
          while(dupp->bottom!=NULL)
          {
              dupp=dupp->bottom;
              arr.push_back(dupp->data);
          }
          temp=temp->next;
          dupp=temp;
      }
      Node* n=NULL;
      Node* start=n;
      sort(arr.begin(),arr.end());
      for(int i=0;i<arr.size();i++)
      {
          if(n==NULL)
          {
          Node* newnode=new Node(arr[i]);
          start=newnode;
          n=newnode;
          }
          else
          {
            Node* newnode=new Node(arr[i]);
            n->bottom=newnode;
            n=newnode;
          }
      }
      return start;
    }
};