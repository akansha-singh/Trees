int lh=height(root->left);
        int rh=height(root->right);
        if(lh-rh<=1&&lh-rh>=-1&&isBalanced(root->left)&&isBalanced(root->right)){
            return 1;
        }

