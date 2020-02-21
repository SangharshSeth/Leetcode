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
vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> result;
    if(root == nullptr)
        return result;
    queue<TreeNode *> nodes;
    nodes.push(root);
    TreeNode *temp = nullptr;
    while (!nodes.empty())
    {
        int size = nodes.size();
        vector<int> v;
        for (int i = 0; i < size; i++)
        {
            temp = nodes.front();
            nodes.pop();
            v.push_back(temp->data);
            if (temp->left != nullptr)
                nodes.push(temp->left);
            if (temp->right != nullptr)
                nodes.push(temp->right);
        }
        result.push_back(v);
    }
    return result;
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
    vector<vector<int>>v = levelOrder(root);
    for(auto & i : v){
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}