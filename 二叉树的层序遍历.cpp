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
#include<queue>
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root)
            return result;
        TreeNode * curEnd = root;
        TreeNode * newEnd = nullptr;
        TreeNode *test = nullptr;
        vector<int> levelresult;
        queue<TreeNode*> q1;
        q1.push(root);
        while(!q1.empty()){
            test = q1.front();
            q1.pop();
            levelresult.push_back(test->val);
            if(test->left!=nullptr){
                q1.push(test->left);
            }
            if(test->right!=nullptr){
                q1.push(test->right);
            }
            newEnd = q1.back();
            if(test==curEnd){
                curEnd = newEnd;
                result.push_back(levelresult);
                levelresult.clear();
            }
        }
        return result;
    }
};