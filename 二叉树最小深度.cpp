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
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        int min_left =0,min_right=0;
        min_left = minDepth(root->left);
        min_right = minDepth(root->right);
        if(!root->left)
            min_left = min_right;
        if(!root->right)
            min_right = min_left;
        return min_left<min_right?++min_left:++min_right;
    }
};