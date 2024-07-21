#include<iostream.h>
using namespace std;
int search(int inorder[],int start,int end,int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
        {
            return 1;
        }
    }
    return -1;
}
//We have given preorder and inorder we have to build the tree then prints its inorder traversal
Node* buildtree(int preorder[],int inorder[],int start,int end){
    static int idx=0;
    if(start>end)
    {
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    Node* node=new Node(curr);
    if(start=end)
    {
        return node;
    }

    int pos=search(inorder,start,end,curr);
    node->left=buildtree(preorder,inorder,start,pos-1);
    node->right=buildtree(preorder,inorder,pos+1,end);
    return node;
}    
void inorder(Node* root)
{
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node*
int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    Node* root=buildtree(preorder,inorder,0,4);
    inorder(root);
    return 0;
}