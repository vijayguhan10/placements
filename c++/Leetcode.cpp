#include <bits/stdc++.h>
using namespace std;
struct tree{
    int val;
    tree*left;
    tree*right;
    tree(int val):val(val),left(nullptr),right(nullptr){}
};
int main(){
  vector<int>preorder{3,9,20,15,7};
  vector<int>inorder{9,3,15,20,7};
  vector<int>left;
  vector<int>right;
  while(!preorder.empty()){
    auto it=find(inorder.begin(),inorder.end(),preorder[0]);
    for(auto init=inorder.begin();init<it;init++){
        left.push_back(*init);
    }
    
  }

}