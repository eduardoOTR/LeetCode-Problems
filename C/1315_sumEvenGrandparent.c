int Search(struct TreeNode* root, struct TreeNode* parent, struct TreeNode* grandparent) {
    if (!root) return 0;
    
    int sum = 0;
    if (grandparent && grandparent->val % 2 == 0) sum += root->val;
    
    sum += Search(root->left, root, parent);
    sum += Search(root->right, root, parent);
    
    return sum;
}

int sumEvenGrandparent(struct TreeNode* root) {
    return Search(root, NULL, NULL);
}
