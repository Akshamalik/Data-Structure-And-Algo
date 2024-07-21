#include<iostream.h>
using namespace std;
struct node
{
    int data;
    struct  node* left;
    struct node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
//Preorder --- root-left-right
void preorderTraverse(struct node* root)
{
     if(root==NULL){
    return
}
    cout<<root->data<<" ";
    preorderTraverse(root->left);
    preorderTraverse(root->right);
}
//Inorder --- left-root-right
void inorderTraverse(struct node* root)
{   if(root==NULL){
    return
}
    inorderTraverse(root->left);
    cout<<root->data<<" ";
    inorderTraverse(root->right);
}
//Postorder ---left-right-root
void postorderTraverse(struct node* root)
{    if(root==NULL){
    return
}
    postorderTraverse(root->left);
    postorderTraverse(root->right);
    cout<<root->data<<" ";
}

// *            1
//             / \
//            2   3
//           / \  /\
//           4  5 6 7
int main()
{
    struct node* root =new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    return 0;
}