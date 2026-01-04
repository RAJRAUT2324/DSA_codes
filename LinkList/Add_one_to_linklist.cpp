class Solution {
  public:
  Node* reverseNumber(Node*& head)
  {
      Node* current=head;
      Node* prew=NULL;
      
      while(current!=NULL)
      {
          Node* forward=current->next;
          current->next=prew;
          prew=current;
          current=forward;
      }
      return prew;
  }
  
    Node* addOne(Node* head) {
        //reversing number
         head=reverseNumber(head);
         //logic to add one
         int carry=1;
         int sum=0;
         Node* temp=head;
         while(temp!=NULL)
         {
             sum=temp->data+carry;
             int digit=sum%10;
             temp->data=digit;
             carry=sum/10;
             if(carry!=0 && temp->next==NULL)
             {
                 Node* newnode=new Node(carry);
                 temp->next=newnode;
                 temp=newnode;
             }
             temp=temp->next;
         }
         head=reverseNumber(head);
         return head;
    }
};

// You are given a linked list where each element in the list is a node and have an integer data. You need to add 1 to the number formed by concatinating all the list node numbers together and return the head of the modified linked list. 

// Note: The head represents the first element of the given array.

// Examples :

// Input: LinkedList: 4->5->6
// Output: 457

// Explanation: 4->5->6 represents 456 and when 1 is added it becomes 457. 