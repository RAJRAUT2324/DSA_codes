#include <iostream>
#include <vector>
#include <string>
#include<limits.h>
using namespace std;

class Node{
	public:
		int data;
        Node* prew=NULL;
		Node* next=NULL;

	//Constructor
	Node(int value) {
		this->data = value;
		this->next = NULL;
        this->prew = NULL;
	}
};
void Inserthead(int value,Node*& head,Node*& tail)
{
//for null condition
if(head==NULL && tail==NULL)
{
   Node* newnode=new Node(value);
   head=newnode;
   tail=newnode;
}
else
{
    Node* newnode=new Node(value);
    newnode->next=head;
    head->prew=newnode;
    head=newnode;
}
}

//tail insert
void InsertTail(int value,Node*& head,Node*& tail)
{
//for null condition
if(head==NULL && tail==NULL)
{
   Node* newnode=new Node(value);
   head=newnode;
   tail=newnode;
}
else
{
    Node* newnode=new Node(value);
    tail->next=newnode;
    newnode->prew=tail;
    tail=newnode;
}
}
//front traverse
void Traverse(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
//now it is the reverse traversing function starts from the tail because 
//tail store prew upto null at starting
void TraverseBack(Node* tail)
{
    Node* temp1=tail;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<"->";
        temp1=temp1->prew;
    }
}
//now insert element at any position in linkedlist in doubaly linked list
void InsertatPos(int value,int loc,Node*& head,Node*& tail)
{
    if(loc==1)
    {
        Inserthead(value,head,tail);
    }
    else if(loc==4)
    {
        InsertTail(value,head,tail);
    }
    else
    {
        Node* newnode=new Node(value);
        Node* temp=head;
        for(int i=0;i<loc-2;i++)
        {
            temp=temp->next;
        }
        Node* current=temp->next;
        temp->next=newnode;
        newnode->prew=temp;
        newnode->next=current;
        current->prew=newnode;

    }
}
//now its time to delete the element fron linkedlist
void deleteLink(int pos,Node*& head,Node*& tail)
{
    if(head==tail)
    {
    Node* temp=head;
    head=NULL;
    tail=NULL;
    delete temp;
    }
    else if(pos==1)
    {
        Node* temp=head;
        head=head->next;
        head->prew=NULL;
        temp->next=NULL;
        delete temp;
    }
    else if(6==pos)
    {
     Node* btemp=head;
        Node* temp=head;
        for(int i=0;i<pos-2;i++)
        {
            btemp=btemp->next;
        }
        Node* ctemp=btemp->next;
        temp=ctemp;
        btemp->next=NULL;
        tail=btemp;
        delete temp;
    }
    else
    {
        Node* btemp=head;
        Node* temp=head;
        for(int i=0;i<pos-2;i++)
        {
            btemp=btemp->next;
        }
        Node* ctemp=btemp->next;
        Node* ntemp=ctemp->next;
        btemp->next=ntemp;
        ntemp->prew=btemp;
        temp=ctemp;
        temp->prew=NULL;
        temp->next=NULL;
        delete temp;

    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    InsertTail(10,head,tail);
    InsertTail(20,head,tail);
    InsertTail(30,head,tail);
    InsertTail(40,head,tail);
    InsertTail(50,head,tail);
    Traverse(head);
    cout<<endl;
    cout<<"After inserting one element"<<endl;
    InsertatPos(300,3,head,tail);
    Traverse(head);
    deleteLink(6,head,tail);
    cout<<endl;
    Traverse(head);
    // Inserthead(10,head,tail);
    // Inserthead(20,head,tail);
    // Inserthead(30,head,tail);
    // Inserthead(40,head,tail);
    // Inserthead(50,head,tail);
    // cout<<"Straght print from end to zero"<<endl;
    // Traverse(head);
    // cout<<endl;
    // cout<<"Reverse print from end to zero"<<endl;
    // TraverseBack(tail);

    return 0;
}

//----ye thi doubaly linked list ki kahani -----//
