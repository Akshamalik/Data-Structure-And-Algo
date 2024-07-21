#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

bool isBalance(Node* root, int* height) {
    if (root == nullptr) {
        *height = 0;
        return true;
    }

    int lh = 0, rh = 0;
    if (!isBalance(root->left, &lh) || !isBalance(root->right, &rh)) {
        return false;
    }

    *height = 1 + max(lh, rh);

    if (abs(lh - rh) <= 1) {
        return true;
    } else {
        return false;
    }
}

int height(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}

bool ifbalance(Node* root) {
    if (root == nullptr) {
        return true;
    }

    if (!ifbalance(root->left) || !ifbalance(root->right)) {
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if (abs(lh - rh) <= 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);

    if (ifbalance(root1)) {
        cout << "ifbalance: Balanced tree" << endl;
    } else {
        cout << "ifbalance: Unbalanced tree" << endl;
    }

    int height = 0;
    if (isBalance(root1, &height) == true) {
        cout << "isBalance: Balanced tree" << endl;
    } else {
        cout << "isBalance: Unbalanced tree" << endl;
    }

    return 0;
}
