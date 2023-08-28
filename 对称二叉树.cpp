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
#include <queue>
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q1;
        queue<TreeNode*> q2;
        q1.push(root->left);
        q2.push(root->right);
        while(!q1.empty()&&!q2.empty()){
            
            if(q1.front()&&!q2.front()){
                return false;
            }
            if(!q1.front()&&q2.front()){
                return false;
            }
            
            if(q1.front()&&q2.front())
                if(q1.front()->val!=q2.front()->val)
                     return false;
            if(q1.front()){
                q1.push(q1.front()->left);
                q1.push(q1.front()->right);
            }
            q1.pop();
            if(q2.front()){
                q2.push(q2.front()->right);
                q2.push(q2.front()->left);
            }
            q2.pop();
        }
        return true;
    }
};