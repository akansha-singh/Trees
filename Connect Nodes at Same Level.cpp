
class Solution{
public:    
    Node* rec(Node* root){
        if(root->left==NULL&&root->right==NULL)return root;
        if(root->left!=NULL){
            root->left->next=root->right;
        }
        if(root->next!=NULL){
            cout<<root->val;
            root->right->next=root->next->left;
        } 
        rec(root->left);
        rec(root->right);
        return root;
    }
    Node* connect(Node* root){
        if(root==NULL)return NULL;
        return rec(root);
    }
};