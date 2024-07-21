#include<iostream>
using namespace std;
//check for bst   
//Aproach 1- check for every node wheter it is greater than it left child and right child(wrong approch)
//Approach 2-max of left subtree and min of right subtree
//Approach 3- min allowe and max allowed variables

struct Node{
    int data;
    Node* left,*right;
    Node(int val)
    {
        int data=val;
        left=NULL;
        right=NULL;
    }
};

bool isBST(Node* root,Node*min,Node* max)
{
    if(root==NULL)
    {
        return true;
    }
    if(min!=NULL && root->data<=min->data)
    {
        return false;
    }
    if(max!=NULL && root->data>=max->data)
    {
        return false;
    }

    bool leftValid=isBST(root->left,min,root);
    bool rightValid=isBST(root->right,root,max);

    return leftValid and rightValid;
}
int main()
{

    Node* root1=new NOde(1);
    root1->left=new Node(2);
    root1->right=new Node(3);

    if()
    return 0;
}