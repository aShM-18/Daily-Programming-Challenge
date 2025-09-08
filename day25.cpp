#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

bool isBST(Node* root, long long minVal, long long maxVal) {
    if (!root) return true;
    if (root->val <= minVal || root->val >= maxVal) return false;
    return isBST(root->left, minVal, root->val) && isBST(root->right, root->val, maxVal);
}

bool checkBST(Node* root) {
    return isBST(root, LLONG_MIN, LLONG_MAX);
}

int main() {
    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);
    cout << (checkBST(root) ? "true" : "false");
}
