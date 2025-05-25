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
    bool isTreeBalanced = true;
    int depth(TreeNode* root) {
        if (!root) return 0;

        int lh = depth(root->left);
        int rh = depth(root->right);

        if (isTreeBalanced && abs(lh - rh) > 1) {
            isTreeBalanced = false;
        }
        return 1 + max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        depth(root);
        return isTreeBalanced;
    }
};