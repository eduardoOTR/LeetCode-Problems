/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isMirror(struct TreeNode* rootOne, struct TreeNode* rootTwo) {
    if (!rootOne && !rootTwo) return true;
    if (!rootOne || !rootTwo || rootOne->val != rootTwo->val) return false;
    
    return isMirror(rootOne->left, rootTwo->right) && isMirror(rootOne->right, rootTwo->left);
}

bool isSymmetric(struct TreeNode* root) {
    if (!root) return true;

    return isMirror(root->left, root->right);
}
