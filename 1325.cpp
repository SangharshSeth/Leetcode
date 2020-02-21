struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution
{
public:
    void Delete(TreeNode *&root, int target)
    {
        if (root == nullptr)
            return;
        if (root->left == nullptr and root->right == nullptr and root->val == target)
        {
            root = nullptr;
            return;
        }
        else
        {
            if (root->left)
                Delete(root->left, target);
            if (root->right)
                Delete(root->right, target);
        }
        if (root->left == nullptr and root->right == nullptr and root->val == target)
        {
            root = nullptr;
            return;
        }
    }
    TreeNode *removeLeafNodes(TreeNode *root, int target)
    {
        Delete(root, target);
        return root;
    }
};