#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};void inorderTraversal(TreeNode* root) {
    stack<TreeNode*> st;
    TreeNode* curr = root;
    while (curr || !st.empty()) {
        while (curr) {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->val << " ";
        curr = curr->right;
    }
}

// Iterative Preorder Traversal (Root -> L -> R) 
void preorderTraversal(TreeNode* root) {
    if (!root) return;
    stack<TreeNode*> st;
    st.push(root);
    while (!st.empty()) {
        TreeNode* curr = st.top();
        st.pop();
        cout << curr->val << " ";
        if (curr->right) st.push(curr->right);
        if (curr->left) st.push(curr->left);
    }
}

// Iterative Postorder Traversal (L -> R -> Root)
void postorderTraversal(TreeNode* root) {
    if (!root) return;
    stack<TreeNode*> st1, st2;                                                                          
    st1.push(root);
    while (!st1.empty()) {
        TreeNode* curr = st1.top();
        st1.pop();
        st2.push(curr);
        if (curr->left) st1.push(curr->left);
        if (curr->right) st1.push(curr->right);
    }
    while (!st2.empty()) {
        cout << st2.top()->val << " ";
        st2.pop();
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << "\nPreorder Traversal: ";
    preorderTraversal(root);
    cout << "\nPostorder Traversal: ";
    postorderTraversal(root);

    return 0;
}
