//Return true if, for every node X in the tree other than the leaves, its value is equal to the sum of its left subtree's value and its right subtree's value. Else return false.
class Solution
{
    public:
    int f=1;
    int rec(Node* root){
        if(root==NULL||f==0)return 0;
        if(root->left==NULL&&root->right==NULL)return root->data;
        int l=rec(root->right);
        int r=rec(root->left);
        if(l+r != root->data)f=0;
        return root->data+l+r;
    }
    bool isSumTree(Node* root)
    {
         rec(root);
         return f;
    }
};





