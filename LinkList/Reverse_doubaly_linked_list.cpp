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

//by simple method converting to array
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
        vector<int>arr;
        while(head!=NULL)
        {
            arr.push_back(head->data);
            head=head->next;
        }
        std::reverse(arr.begin(),arr.end());
        Node* head1=NULL;
        Node* start=head1;
        for(int i=0;i<arr.size();i++)
        {
            Node* temp=new Node(arr[i]);
            if(head1==NULL)
            {
              
                head1=temp;
                 head1->prev=NULL;
                  start=head1;
            }
            else
            {
                head1->next=temp;
                temp->prev=head1;
                head1=temp;
            }
        }
        return start;
    }
};