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
typedef struct result{
     int length;
     bool isBalance;
 }result;
    bool isBalanced(TreeNode* root) {
        result  a = isbalance(root);
        return a.isBalance;
    }
    result isbalance(TreeNode*root){
        if(!root){
            return {0,true};
        }
        result leftresult = isbalance(root->left);
        result right = isbalance(root->right);
        if(!leftresult.isBalance||!right.isBalance){
            return {0,false};
        }
        if(abs(leftresult.length-right.length)>1){
            return {0,false};
        }
        return{leftresult.length>right.length?leftresult.length+1:right.length+1,true};
    }
};