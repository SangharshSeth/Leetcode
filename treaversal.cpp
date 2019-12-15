#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> result;
    stack<TreeNode *> roots;
    TreeNode *curr = root;
    while (curr != NULL or !roots.empty())
    {
        while (curr != NULL)
        {
            roots.push(curr);
            curr = curr->left;
        }
        curr = roots.top();
        result.push_back(curr->val);
        roots.pop();
        curr = curr->right;
    }
    return result;
}
int main()
{
    

    return 0;
}