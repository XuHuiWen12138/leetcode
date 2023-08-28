/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
static int i;
class Solution {
public:
    int countNodes(TreeNode* root) {
        i=0;
        pre(root);
        return i;
    }
    void pre(TreeNode*root){
        if(!root){
            return ;
        }
        pre(root->left);
        pre(root->right);
        i++;
    }
};