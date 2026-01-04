/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
void InsertTail(Node*& Insert,Node*& head,Node*& tail)
{
    if(head==NULL && tail==NULL)
    {
        head=Insert;
        tail=Insert;
    }
    else
    {
        tail->next=Insert;
        tail=Insert;
    }
   
}
    Node* segregate(Node* head) 
    {
        
      Node* zeroHead=NULL;
      Node* zeroTail=NULL;
      
      Node* oneHead=NULL;
      Node* oneTail=NULL;
      
      Node* twoHead=NULL;
      Node* twoTail=NULL;
        
        //logic to insert the numbers in the three linklist
        Node* temp=head;
        while(temp!=NULL)
        {
            Node* insert=temp;
            temp=temp->next;
            insert->next=NULL;
            
            if(insert->data==0)
            {
               InsertTail(insert,zeroHead,zeroTail);
            }
            if(insert->data==1)
            {
               InsertTail(insert,oneHead,oneTail);
            }
            if(insert->data==2)
            {
               InsertTail(insert,twoHead,twoTail);
            }
        }
        // merging logic for the lements
        if(zeroHead!=NULL)
        {
            if(oneHead!=NULL)
            {
                zeroTail->next=oneHead;
                oneTail->next=twoHead;
                return zeroHead;
            }
            else
            {
                //if oneHead is null
                zeroTail->next=twoHead;
                return zeroHead;
            }
        }
        else
        {
            //zero head is null
           if(oneHead!=NULL)
            {
                oneTail->next=twoHead;
                return oneHead;
            }
            else
            {
                //if oneHead is null
                return twoHead;
            }
        }
    }
};

// Given the head of a linked list where nodes can contain values 0s, 1s, and 2s only. Your task is to rearrange the list so that all 0s appear at the beginning, followed by all 1s, and all 2s are placed at the end.

// Examples:

// Input: head = 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
   
// Output: 0 → 1 → 1 → 2 → 2 → 2 → 2 → 2
// Explanation: All the 0s are segregated to the left end of the linked list, 2s to the right end of the list, and 1s in between. The final list will be: