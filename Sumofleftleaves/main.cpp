#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
 //Iterative version

class Solution {
public:
    static int sumOfLeftLeaves(TreeNode* root) {
        if(root == nullptr)
            return 0;
        stack<TreeNode*>s;
        int sum{0};
        TreeNode *temp = nullptr;
        s.push(root);
        while(!s.empty()){
            temp = s.top();
            s.pop();
            if(temp->left != nullptr){
                if(temp->left->left == nullptr and temp->left->right == nullptr)
                    sum+=temp->left->val;
                else
                    s.push(temp->left);
            }
            //Push and process the right leave only if it is not a leaf node
            if(temp->right != nullptr){
                if(temp->right->left != nullptr or temp->right->right != nullptr)
                    s.push(temp->right);
            }
        }
        return sum;
    }
};
//Recursive
/*
 * int sumOfLeftLeaves(TreeNode* root) {
        if(root == nullptr)
            return 0;
        int sum = 0;
        if(root->left != nullptr){
            if(root->left->left == nullptr and root->left->right == nullptr)
                sum+=root->left->val;
            else
                sum+=sumOfLeftLeaves(root->left);

        }
        sum+=sumOfLeftLeaves(root->right);
        return sum;
    }
 */
int main() {
    auto *root = new TreeNode(1);
    root->left = new TreeNode(5);
    cout << Solution::sumOfLeftLeaves(root);
    return 0;
}
