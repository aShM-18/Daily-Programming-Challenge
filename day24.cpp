#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

Node* lca(Node* root, Node* p, Node* q) {
    if (!root || root == p || root == q) return root;
    Node* left = lca(root->left, p, q);
    Node* right = lca(root->right, p, q);
    if (left && right) return root;
    return left ? left : right;
}

int main() {
    Node* root = new Node(3);
    root->left = new Node(5);
    root->right = new Node(1);
    root->left->left = new Node(6);
    root->left->right = new Node(2);
    root->right->left = new Node(0);
    root->right->right = new Node(8);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);

    Node* p = root->left;
    Node* q = root->right;
    Node* ans = lca(root, p, q);
    cout << ans->val;
}
