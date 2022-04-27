#include <bits/stdc++.h>
using namespace std;

// Structure of binary tree
struct Node {
	Node* left;
	Node* right;
	int hd;
	int data;
};

// function to create a new node
Node* newNode(int key)
{
	Node* node = new Node();
	node->left = node->right = NULL;
	node->data = key;
	return node;
}

// function should print the topView of
// the binary tree
void topview(Node* root)
{
        map<int,vector<int>>mp;
        queue<Node*>q;
        root->hd=0;
        q.push(root);
        int hd;
        while(!q.empty()){
            Node* temp=q.front();
            hd=temp->hd;
            q.pop();
            mp[hd].push_back(temp->data);
            if(temp->left!=NULL){
                temp->left->hd = hd-1;
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                temp->right->hd = hd+1;
                q.push(temp->right);
            }
        }
        // Top View
        for(auto it:mp){
            cout<<it.second[0];
        }
        cout<<endl<<endl;
        // Bottom View
        int sz;
        for(auto it:mp){
            sz=it.second.size();
            cout<<it.second[sz-1];
        }
        cout<<endl<<endl;
        // Vertical Order
        for(auto it:mp){
            for(auto i:it.second){
                cout<<i;
            }
            cout<<endl;
        }
}

int main()
{
	/* Create following Binary Tree
		 1
		/ \
		2 3
		   \
			4
			 \
			 5
			\
				6*/
	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->right = newNode(4);
	root->left->right->right = newNode(5);
	root->left->right->right->right = newNode(6);
	cout << "Following are nodes in top view of Binary "
			"Tree\n";
	topview(root);
    // ans=2136
	return 0;
}

