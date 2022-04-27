#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool helper(TreeNode* root, int targetSum,int sum){
        if(root==NULL){
            return 0;
        }
        sum=sum+root->val;
        if(root->left==NULL&&root->right==NULL&&sum==targetSum){
            return 1;
        }
        return helper(root->left,targetSum,sum)||helper(root->right,targetSum,sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum){
        int sum=0;
        if(root==NULL){
            if(targetSum==sum) return 0;
            else return 0;
        }
        return helper(root,targetSum,sum);
    }
};