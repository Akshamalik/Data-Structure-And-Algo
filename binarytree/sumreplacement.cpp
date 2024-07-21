
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        right = NULL;
        left = NULL;
    }
};
void sumReplace(Node* root) {
    if (root == NULL) {
        return;
    }

    sumReplace(root->left);
    sumReplace(root->right);
    if (root->left != NULL) {
        root->data += root->left->data;
    }
    if (root->right != NULL) {
        root->data += root->right->data;
    }
}

void preorder(Node* root) {
    cout << root->data << endl;
    if (root->left != NULL) preorder(root->left);
    if (root->right != NULL) preorder(root->right);
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preorder(root);
    cout << "\n";
    sumReplace(root);
    preorder(root);
    return 0;
}




//Time Complexity-->>>As we are iterating all over the elements the its O(n)
