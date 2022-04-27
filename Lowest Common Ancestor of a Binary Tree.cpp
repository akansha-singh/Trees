TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)return NULL;
        if(root==p||root==q)return root;
        TreeNode* lefttree=lowestCommonAncestor(root->left,p,q);
        TreeNode* righttree=lowestCommonAncestor(root->right,p,q);   
        if(lefttree==NULL)return righttree;
        if(righttree==NULL)return lefttree;                
        return root;
    }

