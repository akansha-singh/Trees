#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int solve(Node* root,int &res){
        if(root==NULL)return 0;// base case
        int ls=solve(root->left,res);//hypothesis begins
        int rs=solve(root->right,res);//hypothesis ends
        if (root->left && root->right)
        {
            int temp=max(ls, rs) + root->data; // Return maximum possible value for root being on one side
            res = max(res, ls + rs + root->data); // Update result if needed
            return temp;
        }   
    // If any of the two children is empty, return root sum for root being on one side
        return (root->left)? ls + root->data:rs + root->data;
    }
    int maxPathSum(Node* root)
    {
        // code here
        int res=INT_MIN;
        int val=solve(root,res);
        if(root->left && root->right)
            return res;
        return max(res, val);
    }
};

