bool helper(TreeNode* p, TreeNode* q){
        if(p==NULL&&q==NULL) return true;
        if(p==NULL||q==NULL) return false;
        if(p->val!=q->val)return false;
        return helper(p->right,q->left)&&helper(p->left,q->right);
    }
    bool isSymmetric(TreeNode* root) {
        return helper(root->left,root->right);
    }

