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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        bool seq=true;
        while(!q.empty()){
            int sz=q.size();
            vector<int> level;
            for(int i=0;i<sz;i++){
                TreeNode* nd=q.front();
                q.pop();
                level.push_back(nd->val);
                if(nd->left !=NULL) q.push(nd->left);
                if(nd->right !=NULL) q.push(nd->right);
            }
            if(seq){
                ans.push_back(level);
                seq=false;
            }
            else{
                reverse(level.begin(),level.end());
                ans.push_back(level);
                seq=true;
            }
        }
        return ans;
    }
    
};