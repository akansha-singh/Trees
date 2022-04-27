//The left subtree of a node contains only nodes with keys lesser than the node’s key.
//The right subtree of a node contains only nodes with keys greater than the node’s key.
//The left and right subtree each must also be a binary search tree.

bool fun(TreeNode* root,long long int min,long long int max){
        if(root==NULL)return true;
        if(root->val<=min||root->val>=max)return false;
        return fun(root->left,min,root->val)&&fun(root->right,root->val,max);        
    }
    bool isValidBST(TreeNode* root){
        if(root==NULL)return true;
        return fun(root,LLONG_MIN,LLONG_MAX);
    }

