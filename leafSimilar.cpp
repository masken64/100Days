 void inOrder(TreeNode* root, string &s){
        if(root==NULL) return;

        if(root->left==NULL && root->right==NULL){
            s+=to_string(root->val) + "x";
            return;
        }
        inOrder(root->left,s);
        inOrder(root->right,s);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1 ="";
        string s2 ="";

        inOrder(root1,s1);
        inOrder(root2,s2);

        if(s1==s2) return true;
        else return false;
    }
