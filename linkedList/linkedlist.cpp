//Linked list is a contiguous data structure which stores data at multiple blocks
//array limitation--size,contiguos memory.insertion/deletion costly
//first node is head and last node points to null
//two parts data field and next pointer which points to next node
#include<iostream.h>
using namespace std;


class node{
    public:
    int data;
    node* next;
    node( int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL){
         head=n;
         return;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}
void display(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertATHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

bool search(node* head,int key)
{
    node* temp=head;
     while(temp->next!=NULL)
     {
        if(temp->data=key)
        {
            return true;
        }
        temp=temp->next;
     }
     return false;
}

deleteNode(node* &head,int val)
{
    node* temp=head;
    if(head==NULL)
    {
        return;
    }
    while(temp->next->data=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}
deleteAtHead(node* &head)
{
    node* temp=head;
    head=head->next;
    delete temp;
}


int main()
{
    node* head=NULL;
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    deleteAtHead(head);
    deleteNode(head,4)
    return 0;
}

