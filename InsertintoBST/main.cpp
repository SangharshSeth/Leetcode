#include <iostream>
using namespace std;
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *temp = root;
        while(temp != nullptr){
            if(val > temp->val){
                if(temp->right == nullptr){
                    temp->right = new TreeNode(val);
                    break;
                }
                temp = temp->right;
            }
            else{
                if(temp->left == nullptr){
                    temp->left = new TreeNode(val);
                    break;
                }
                temp = temp->left;
            }

        }
        return  root;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
