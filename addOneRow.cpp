class Solution {
public:
    TreeNode* add(TreeNode* root, int val, int depth, int curr) {
        if (root == nullptr) {
            return nullptr;
        }

        if (curr == depth - 1) {
            TreeNode* leftTemp = root->left;
            TreeNode* rightTemp = root->right;

            root->left = new TreeNode(val);
            root->right = new TreeNode(val);

            root->left->left = leftTemp;
            root->right->right = rightTemp;

            return root;
        }

        root->left = add(root->left, val, depth, curr + 1);
        root->right = add(root->right, val, depth, curr + 1);

        return root;
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) { // if new root
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;

            return newRoot;
        }

        int curr = 1;
        return add(root, val, depth, curr);
    }
};
