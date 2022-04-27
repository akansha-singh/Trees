vector<int> leftView(Node *root)
{
   vector<int>vec;
   if(root==NULL)return vec;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* temp=q.front();
                q.pop();
                if(i==0){ //important remember
                    vec.push_back(temp->data);
                }
                if(temp->left!=NULL)q.push(temp->left);
                if(temp->right!=NULL)q.push(temp->right);
            }
        }
        return vec;
}
