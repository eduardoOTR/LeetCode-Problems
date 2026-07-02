bool Search(struct ListNode* head, struct TreeNode* root) {
    if (!head) return true;
    if (!root || head->val != root->val) return false;
    return Search(head->next, root->left) || Search(head->next, root->right);
}

bool isSubPath(struct ListNode* head, struct TreeNode* root) {
    if (!root) return false;
    return Search(head, root) || isSubPath(head, root->left) || isSubPath(head, root->right);
}
