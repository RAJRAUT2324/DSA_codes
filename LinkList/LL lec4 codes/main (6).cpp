/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    void insertAtTail(Node* &toInsert, Node* &head, Node* &tail) {
        //toInsert -> node to insert
        //head -> 0/1/2 wali linked list ka head
        //tail -> 0/1/2 wali LL ka tail 
        if(head == NULL && tail == NULL) {
            head = toInsert;
            tail = toInsert;
        }
        else {
            tail -> next = toInsert;
            tail = toInsert;
        }
    }
    Node* segregate(Node* head) {
        Node* zeroHead = NULL;
        Node* zeroTail = NULL;
        
        Node* oneHead = NULL;
        Node* oneTail = NULL;
        
        Node* twoHead = NULL;
        Node* twoTail = NULL;
        
        Node* temp = head;
        
        while(temp != NULL) {
            ///hr node ko isolate krna h and appropriate LL 
            //me add krna h 
            Node* toInsert = temp;
            temp = temp -> next;
            toInsert -> next = NULL;
            
            //appropriate list me insert karo 
            if(toInsert->data == 0) {
                insertAtTail(toInsert, zeroHead, zeroTail);
            }
            else if(toInsert->data == 1) {
                insertAtTail(toInsert, oneHead, oneTail);
            }
            else if(toInsert->data == 2) {
                insertAtTail(toInsert, twoHead, twoTail);
            }
            //kya yaha pr temp ko aage badhane ki need h ?
            //NO -> line 41 pr temp already aage badha dia h 
        }
        
        //yaha pr 
        //I can say k meri 3 list complete hogyi 
        //mujhe inko merge karna h 
        if(zeroHead != NULL) {
            
            if(oneHead != NULL) {
                //connect zero LL with one LL 
                zeroTail->next = oneHead;
                oneTail->next = twoHead;
                return zeroHead;
            }
            else {
                //oneHead == NULL;
                zeroTail->next = twoHead;
                return zeroHead;
            }
            
        }
        else {
            //zeroHead == NULL
            if(oneHead != NULL) {
                oneTail -> next = twoHead;
                return oneHead;
            }
            else {
                //oneHead == NULL
                return twoHead;
            }
        }
        
        
        
    }
};