#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    // TreeNode() : val(0), left(nullptr), right(nullptr) {}
    // TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* insertVal(TreeNode* root, optional<int> val) {
    if (!val.has_value()) return root;
    if (!root) return new TreeNode(val.value());

    if (val.value() < root->val)
        root->left = insertVal(root->left, val);
    else
        root->right = insertVal(root->right, val);

    return root;
}

void preorder(TreeNode* root,int target ,int sum,vector<int>&temp,vector<vector<int>>&res) {
    cout<<"root values passed : "<<root->val<<endl;
    if (!root) return;
    sum+=root->val;
    cout<<"sum : "<<sum<<endl;
    if ((target >= 0 && sum > target) || (target < 0 && sum < target)) {
        return;
    }
    
    if(sum<=target){
        temp.push_back(root->val);
    }
    if(!root->left && !root->right){
        if(sum==target){
            res.push_back(temp);
            for(int it:temp){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        temp.pop_back();
        return;
    }
    preorder(root->left,target,sum,temp,res);
    cout<<"right node passed : "<<endl;
    preorder(root->right,target,sum,temp,res);
    temp.pop_back();
    cout<<"After Popping up the element : "<<endl;
    for(int it:temp){
        cout<<"it : "<<it<<endl;
    }
    return;
}
void preorder1(TreeNode*root){
    if(!root){
        return;
    }
    cout<<root->val<<" , ";
    preorder1(root->left);
    preorder1(root->right);
}

int main() {
    vector<optional<int>> nums{-2,nullopt,-3};
    TreeNode* root = nullptr;
    for (auto it : nums) {
        root = insertVal(root, it);
    }

    vector<vector<int>> res;
    vector<int> temp;
    preorder(root, 26, 0, temp, res);  // Ensure the preorder function is implemented correctly
    for (auto& it : res) {
        for (int i : it) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}