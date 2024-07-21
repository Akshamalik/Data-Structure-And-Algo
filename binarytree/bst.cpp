#include<iostream.h>
using namespace std;
//0(lgn)
//leftsubtree[key]<node[key]
//rightsubtree[key]>node[key]
//right and left each must be a binary search tree

struct Node{
    int data;
    Node *left,*right;
    Node(int val)
    {
        data=val;
        right=NULL;
        left=NULL;
    }
};

Node* insertBST(Node* root,int val)
{
    if(root ==NULL)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left=insertBST(root->left,val);
    }
    else{
        //val >root->data
        root->right =insertBST(root->right,val)
    }
    return root;
}
//Search in bst for other normal tree its 0(n) but in bst its O(lgn)
//worst case is height of tree 
//Nodes for comparison
//0   n
//1   n/2
//2   n/4
//3   n/8
//height=h node=n
//1+2+2^2+.....+2^h-1=n
//2^h-1=n
//h=log(n+1)
Node* searchBST(Node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    if(root->data>key)
    {
        return searchBST(root->left,key)
    }
    return searchBST(root->right,key);
}
//bst inorder gives sorted bst sequence
void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
Node* inorderSuccessor(Node* root)
{
    Node* curr=root;
    while(curr && curr->left !=NULL)
    {
        curr=curr->left;
    }
    return curr;
}
//Delete a node
//Node is a leaf  --delete directly
//Node has one child --replace node with child delete node
//Node has two children --find inorder successor(inorder fir jo bhi value baad hai dusre ke inorder Successor hogi) replace it with inorder successor  to delete the node
Node* deleteBST(Node* root,int key)
{
    if(key<root->data)
    {
        root->left=deleteBST(root->left,key);
    }
    else if(key>left->data)
    {
        root->right=deleteBST(root->right,key);
    }
    else{
        if(root->left==NULL)
        {
            Node* temp=root->right;
            free(root);
            return temp;
        }
         if(root->right==NULL)
        {
            Node* temp=root->left;
            free(root);
            return temp;
        }
        Node* root=new Node(4);
        root->data=temp->data;
        root->right=deleteBST(root->right,temp->key);

    }
    return root;
}
int main()
{
    Node* root=NULL;
    root=insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    inorder(root);
    cout<<endl;
   if( searchBST(root,5)==NULL){
    cout<<"key not exist";
   }
   else{
    cout<<"key exist";
   }
//    root=deleteBST(root,5);
//    inorder(root);
    return 0;
}

