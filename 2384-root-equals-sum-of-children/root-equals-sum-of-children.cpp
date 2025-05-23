
class Solution {
public:
    bool checkTree(TreeNode* root) {
        int x=root->right->val;
        int y = root -> left ->val;
        int ans = x+y;
        if(ans==root->val){
            return true;
        }
        return false;
    }
};