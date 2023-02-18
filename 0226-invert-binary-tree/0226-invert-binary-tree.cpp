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
    TreeNode* invertTree(TreeNode* root) {
        //if(!root || (!root->left && !root->right)) return root;
        
        queue<TreeNode*> q;
        if(!root) return nullptr;
        q.push(root);
        while(!q.empty()){
            TreeNode * curr =q.front(); q.pop();
           
            if(curr->right) q.push(curr->right);
            if(curr->left) q.push(curr->left);
			
            TreeNode* tmp = curr->left;
            curr->left = curr->right;
            curr->right = tmp;
        }
        return root;
    }
};