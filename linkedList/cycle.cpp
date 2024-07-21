#include<iostream.h>
using namespace std;

//Floyd's Detect Cycle Hare and Tortoise
class node{
    public:
    int data;
    node* next;
    node(val){
        data=val;
        next=NULL;
    }
}
bool detectCycle(node * &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

void makeCycle(node* &head,int pos)
{
    node* temp=head;
    node* startNode;
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}
void removeCycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }
    while(slow!=fast)
    fast=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}

int main()
{

    makeCycle(head,3);
    cout<<detectCycle(head);
    return 0;
}
