/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverseLL(Node* &head) {
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr != NULL) {
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        //new head
        return prev;
    }
    Node* addOne(Node* head) {
        // Your Code here
        //Step1: reverseLL
        head = reverseLL(head);
        
        //Step2: add 1 logic
        int carry = 1;
        Node* temp = head;
        
        while(temp != NULL) {
            int data = temp ->data;
            int sum = data + carry;
            
            int digit = sum % 10;
            carry = sum / 10;
            
            //insert digit into curr node
            temp->data = digit;
            
            if(temp->next == NULL && carry != 0) {
                //i need to create a extra node 
                Node* newNode = new Node(carry);
                //link this node with temp
                temp->next = newNode;
                temp = newNode;
            }
            
            //move to next node, otherwise loop stuck
            temp = temp -> next;
        }
        //step3: again revese to get the answer
        head = reverseLL(head);
        
        return head;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // return head of list after adding one
    }
};