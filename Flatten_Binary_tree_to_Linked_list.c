//Given the root of a binary tree, flatten the tree into a "linked list":Given the root of a binary tree, flatten the tree into a "linked list":
void flatten(struct TreeNode* root) {
    if (!root) return; 

    
    struct TreeNode* prev = NULL;

    
    void traverse(struct TreeNode* node) {
        if (!node) return;

        
        traverse(node->right);
        traverse(node->left);
        node->right = prev;
        node->left = NULL;
        prev = node;
    }

    traverse(root);
}
