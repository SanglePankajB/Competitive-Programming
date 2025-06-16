#include<bits/stdc++.h>
using namespace std;

class treenode{
    
public:
    int data;
    treenode* left;
    treenode* right;

    treenode(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

};

treenode* buildtree(treenode* &root){
    cout<<"Enter the data: ";
    int data;cin>>data;

    root = new treenode(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data to insert at left of "<< data<<endl;
    root->left =  buildtree(root->left);

    cout<<"Enter the data to insert at right of "<< data<<endl;
    root->right =  buildtree(root->right);

    return root;


}

// void printtree(treenode* root){
//     queue<treenode*> q;
//     q.push(root);
//     while(!q.empty()){
//         treenode* temp = q.front();
//             q.pop();
        
//             cout<<temp->data<<" ";

//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
        
//     }
// }

void printtree(treenode* root){         // Level order traversal
    queue<treenode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){

        treenode* temp = q.front();
            q.pop();
        
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
   
    }
}

int main()
{
    
    treenode* root = NULL;

    buildtree(root);

    cout<<"This is root: "<<root->data<<endl;
    // cout<<"This is root->left: "<<root->left->data<<endl;
    // cout<<"This is root->right: "<<root->right->data<<endl;
    // printtree(root);

    
    return 0;
}