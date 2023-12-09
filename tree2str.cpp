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
    string ans="";
    void preOrder(TreeNode* root){
        if(root==NULL)  return;

        ans+=to_string(root->val);
        if(root->left!=NULL || root->right!=NULL){
            ans+="(";
            preOrder(root->left);
            ans+=")";
        }

        if(root->right!=NULL){
            ans+="(";
            preOrder(root->right);
            ans+=")";
        }
    }

    string tree2str(TreeNode* root) {
        preOrder(root);
        return ans;
    }
};
