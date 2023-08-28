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
 static TreeNode*Firstleft;
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        Firstleft = nullptr;
        int treelength = length(root); 
    }
    int length(TreeNode*root){
        if(!root){
            return 0;
        }
        int left_length = length(root->left);
        int right_length = length(root->right);
        return left_length>right_length?++left_length:++right_length;
    }
    void findleft(TreeNode*root,int curlength,int maxlength){
        if(Firstleft){
            return;
        }
        if(!root){
            return;
        }
        findleft(root->left,curlength+1,maxlength);
        if(curlength == maxlength){
            Firstleft == root;
        }
        findleft(root->right,curlength+1,maxlength);
        return;
    }
};