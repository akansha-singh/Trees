#include <bits/stdc++.h>
using namespace std;
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
class Solution{
public:
    int solve(TreeNode* root,int &res){
        if(root==NULL)return 0;// base case
        int l=solve(root->left,res);//hypothesis begins
        int r=solve(root->right,res);//hypothesis ends
        int temp=max(max(l,r)+root->val,root->val);// induction steps
        int ans=max(temp,l+r+root->val); //finding ans for every path
        res=max(ans,res);
        return temp;
    } //temp=2,ans=2,res=2
    //l=2,r=3,temp=4,ans=6,res=6
    int maxPathSum(TreeNode* root){
        int res=INT_MIN;
        solve(root,res);
        return res;        
    }  
};