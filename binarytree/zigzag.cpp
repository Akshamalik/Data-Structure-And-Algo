#include <iostream>
#include<stack>
using namespace std;
using namespace std;

struct Node{
    int data;
    Node* left,*right;
    Node(int val){
    left=NULL;
    right=NULL;
    data=val;    
    }
};
void zigzag(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    stack<Node *> currLevel;
    stack<Node *> nextLevel;

    bool leftToright = true;
    currLevel.push(root);

    while (!currLevel.empty())
    {
        Node *temp = currLevel.top();
        currLevel.pop();

        if (temp)
        {
            cout << temp->data << " ";

            if (leftToright)
            {
                if (temp->left)
                {
                    nextLevel.push(temp->left);
                }

                if (temp->right)
                {
                    nextLevel.push(temp->right);
                }
            }

            else
            {
                if (temp->right)
                {
                    nextLevel.push(temp->right);
                }
                if (temp->left)
                {
                    nextLevel.push(temp->left);
                }
            }
        }
        if(currLevel.empty())
        {
            leftToright=!leftToright;
            swap(currLevel,nextLevel);
        }
    }
}
int main()
{
    //    12
    //    /\
      // 9  15
    //  /\  /\
 //    5 10
    Node *root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(10);

    zigzag(root);
    cout<<endl;
    return 0;
}

//12 15 9 5 10