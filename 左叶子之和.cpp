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
    int sumOfLeftLeaves(TreeNode* root) {
        return sum(root,false);
    }
    int  sum(TreeNode * root,bool is_left){
        if(!root){
            return 0;
        }
        int result = 0;
        int sum_left =sum(root->left,true);
        int sum_right =sum(root->right,false);
        if(is_left){
            if(!root->right&&!root->left)
                result+=root->val;
        }
        return sum_left+sum_right+result;
    }
};