/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/
// here we just reversing the link and heqd 
// 1->2->3->4->5
// 1<-2<-3<-4<-5

class Solution {
  public:
    Node* reverseList(Node* head) {
        Node* prew=NULL;
        Node* current=head;
        while(current!=NULL)
        {
            Node* Forward=current->next;
            current->next=prew;
            prew=current;
            current=Forward;
        }
        head=prew;
        return head;
    }
};

// You are given the head of a singly linked list. You have to reverse the linked list and return the head of the reversed list.

// Examples: using recurtion
/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
  Node* solve(Node*& head,Node*& current,Node*& prew)
  {
      //base case
      if(current==NULL)
      {
          return head;
      }
      Node* forward=current->next;
      current->next=prew;
      prew=current;
      current=forward;
      solve(head,current,prew);
      head=prew;
      return prew;
      
  }
    Node* reverseList(Node* head) {
     Node* current=head;
      Node* prew=NULL;
      Node* ans=head;
      ans=solve(head,current,prew);
      return ans;
    }
};

// You are given the head of a singly linked list. You have to reverse the linked list and return the head of the reversed list.

// Examples: