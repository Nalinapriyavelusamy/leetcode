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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>result;
        queue<TreeNode*>q;
        if(!root)return result;
        q.push(root);
        while(!q.empty()){
            int levelsize = q.size();
            double sum = 0;
            for(int i = 0 ; i<levelsize;i++){
              TreeNode* node = q.front();
              q.pop();
              sum += node -> val;
                if(node->left)
                q.push(node->left);
                if(node->right)
                q.push(node->right);
            }
            double average = sum / levelsize;
            result.push_back (average);
        }
        return result;
    }
};