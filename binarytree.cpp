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
    TreeNode *root = new TreeNode();
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}
vector<int> InOrder(TreeNode *root)
{
    stack<TreeNode *> roots;
    vector<int> nodes;
    TreeNode *curr = root;
    while (curr != NULL or !roots.empty())
    {
        while (curr != NULL)
        {
            roots.push(curr);
            curr = curr->left;
        }
       
        curr = roots.top();
        nodes.push_back(curr->data);
        roots.pop();
        curr = curr->right;
    }
    return nodes;
}
int main()
{

    TreeNode *root = CreateNode(1);
    root->left = CreateNode(2);
    root->right = CreateNode(3);
    root->left->left = CreateNode(4);
    root->left->right = CreateNode(5);
    vector<int> result;
    result = InOrder(root);
    for (auto i : result)
        cout << i << " ";

    return 0;
}