void traverse(struct TreeNode* leftNode, struct TreeNode* rightNode, int level) {
    if ( leftNode == NULL || rightNode == NULL ) return;

    if ( level % 2 != 0 ) {
        int temp = leftNode->val;
        leftNode->val = rightNode->val;
        rightNode->val = temp;
    }
    traverse ( leftNode->left, rightNode->right, level + 1 );
    traverse ( leftNode->right, rightNode->left, level + 1 );
}

struct TreeNode* reverseOddLevels(struct TreeNode* root) {
    if ( root ) traverse ( root->left, root->right, 1 );
    return root;
}
