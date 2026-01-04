#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
//logic for insurting element at the starting of the linked list
//yaha pe hamane void isliye likha kyuki ye kuch nahi return karata
void Insertelement(int value , Node*& head)
{
    if(head==NULL)
    {
        Node* newNode=new Node(value);
        head=newNode;
    }
    else
    {
       Node* newNode=new Node(value);
       newNode->next=head;
       head=newNode;
    }
    // return head;

}
//insert element at the end of the linked list
//ye functinction bhi void chalata par for ex hamane yahase pointer return karana ho to kya karein likha hai.
Node *InsertLast(int value , Node*& head,Node*& tail)
{
    if(head==NULL)
    {
        Node* newNode=new Node(value);
        head=newNode;
        tail=newNode;
    }
    else
    {
       Node* newNode=new Node(value);
       tail->next=newNode;
       tail=newNode;
    }
    return head;

}
void Tarverse(Node* temp)
{
    Node* head=temp;
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}
// Insert at position at random
void InsertRandom(int value , Node*& head,int loc,Node*& tail)
{
    if(loc==0)
    {
        Insertelement(value, head);

    }
    else if(loc==4)
    {
        InsertLast(value,head,tail);
    }
    else
    {

   Node* temp1=head;
   for(int i=0;i<loc-2;i++)
   {
    temp1=temp1->next;
   }
    Node* newNode=new Node(value);
    newNode->next=temp1->next;
    temp1->next=newNode;

    }

}

//deleting element from the any randompoistion
//fisrt we have to check the condition if only one element
//deleting first element from head
//deleting any element at any position
//as if we have to delete element from last we have to traverse whole list hence it will cover in the 
//position deleting at any end

void DeleteRandom(Node*& head,Node*& tail,int value)
{
    Node* temp=head;
    Node* temp22=head;
    temp=NULL;
    //if only one element at the head and tail
    if(head==tail)
    {
     temp=head;
     head=NULL;
     tail=NULL;
     delete temp;
    }
    else if(value==0) //delete first element
    {
        temp=head;
        head=head->next;
        delete temp;
    }
    else
    {

        Node* prev;
        Node* current;
        Node* next;
        for(int i=0;i<value-2;i++)
        {  
            temp22=temp22->next;
        }
        prev=temp22;
        current=prev->next;
        next=current->next;
        //logic
        temp=current;
        temp22->next=next;
        delete temp;
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    cout<<"This is the head insert"<<endl;
    Insertelement(5 , head);
    Insertelement(10 , head);
    Insertelement(15 , head);
    Insertelement(20 , head);
    Insertelement(25 , head);
    Tarverse(head);
    cout<<endl;
    cout<<"Enter new element at the any position"<<endl;
    InsertRandom(150, head,3,tail);
    Tarverse(head);
    cout<<endl;
    cout<<"delete element at the any position"<<endl;
    DeleteRandom( head,tail,3);
    Tarverse(head);

    //  cout<<"This is the head insert"<<endl;
    // InsertLast(10,head,tail);
    // InsertLast(20,head,tail);
    // InsertLast(30,head,tail);
    // Tarverse(head);
    return 0;
}