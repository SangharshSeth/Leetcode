#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
/* 
          3                                      4
    4           5                           1          2
   
1    2




*/



bool areEqual(TreeNode *tree1, TreeNode *tree2)
{
    if (tree1 == NULL and tree2 == NULL)
        return true;
    else if (tree1 == NULL or tree2 == NULL)
        return false;
    return tree1->val == tree2->val and areEqual(tree1->left, tree2->left) and areEqual(tree1->right, tree2->right);
}
bool isSubTree(TreeNode *tree1, TreeNode *tree2)
{
    if (tree1 == NULL || tree2 == NULL)
        return false;
    if (areEqual(tree1, tree2))
        return true;
    return isSubTree(tree1->left, tree2) or isSubTree(tree1->right, tree2);
}

int main()
{

    //test
    return 0;
}