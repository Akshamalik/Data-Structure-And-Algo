#include<iostream.h>
using namespace std;

//reverse a linked list
//Iterative way --three pointer previous ,current and next
//O(n)
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

node* reverse(node* &head)
{
    node* preptr=NULL;
    node* current=head;
    node* nextptr;
    while(current!=NULL)
    {
        nextptr=current->next;
        current->next=preptr;
        preptr=current;
        current=next;
    }
    return preptr;

}
node* recursivereverse(node* &head)
{
    if(head==NULL && head->next=NULL;)
    {
        return head;
    }
    node* newhead=recursivereverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
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

int main()
{

    node* head=NULL;
    insertAtTail(head,3);
    insertAtTail(head,6);
    insertAtTail(head,7);
    display(head);
    //node* newhead=reverse(head);
    node* newhead=recursivereverse(head);
    display(newhead);
    return 0;
}