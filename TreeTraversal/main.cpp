#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
TreeNode *CreateNode(int data)
{
    auto *root = new TreeNode();
    root->data = data;
    root->left = nullptr;
    root->right = nullptr;
    return root;
}
/*
 *
 *
 * void recursivePreOrder(TreeNode *root)
{
    if(root == nullptr)
        return;
    cout << root->data <<" ";
    recursivePreOrder(root->left);
    recursivePreOrder(root->right);
}
void recursiveInOrder(TreeNode *root){
    if(root == nullptr)
        return;
    recursiveInOrder(root->left);
    cout << root->data <<" ";
    recursiveInOrder(root->right);
}
void recursivePostOrder(TreeNode *root){
    if(root == nullptr)
        return;
    recursivePostOrder(root->left);
    recursivePostOrder(root->right);
    cout << root->data <<" ";
}
 *
 *
 */
vector<int>iterativePre(TreeNode *root){
    vector<int>result;
    stack<TreeNode*>roots;
    TreeNode *temp;
    roots.push(root);
    while(!roots.empty()){
        temp = roots.top();
        roots.pop();
        if(temp == nullptr)
            continue;
        result.push_back(temp->data);
        roots.push(temp->right);
        roots.push(temp->left);
    }
    return result;
}
vector<int>iterativeInOrder(TreeNode *root){
    vector<int>result;
    stack<TreeNode*>roots;
    TreeNode *temp = root;
    while(temp != nullptr || !roots.empty()){
        while(temp != nullptr){
            roots.push(temp);
            temp = temp->left;
        }
        temp = roots.top();
        roots.pop();
        result.push_back(temp->data);
        temp = temp->right;
    }
    return result;
}
vector<int>iterativePostOrder(TreeNode *root){
    vector<int>result;
    stack<TreeNode*>roots;
    TreeNode *temp;
    while(!roots.empty()){
        roots.push(temp->right);
        roots.push(temp->left);
    }

}

int main()
{

    TreeNode *root = CreateNode(1);
    root->left = CreateNode(2);
    root->right = CreateNode(3);
    root->left->left = CreateNode(4);
    root->left->right = CreateNode(5);
    //cout << "PreOrder:\n";
    //recursivePreOrder(root);cout<<endl;
    //cout<< "InOrder:\n";
    //recursiveInOrder(root);cout<<endl;
    //cout<< "PostOrder:\n";
    //recursivePostOrder(root);
    vector<int>v = iterativeInOrder(root);
    for(auto i:v)
        cout<<i;
    return 0;
}