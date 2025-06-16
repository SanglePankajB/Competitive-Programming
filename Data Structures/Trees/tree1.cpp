#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
        
    }

};

node * buildtree(node* &root){              // imp argument is address of node type pointer

    cout<<"Enter the data: ";
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }
// if data is not -1 then we are creating a node
    root = new node(data);


    cout<<"Enter data for left node of "<<data <<": ";
    buildtree(root->left);
    cout<<"Enter data for right node of "<<data <<": ";
    buildtree(root->right);

    return root;


}

void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";

    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";

    postorder(root->left);
    postorder(root->right);
}


int main()
{
    node* root = NULL;

    buildtree(root);
    // preorder(root);
    inorder(root);


    return 0;
}
// 1 2 4 -1 -1 5 -1 -1 3 -1 -1