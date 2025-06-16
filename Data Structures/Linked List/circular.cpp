// In signly circular ll we are going to consider only tail

// There is no tail and head in circular LL we can just make any node as tail or head only for traversal operation

#include<bits/stdc++.h>
using namespace std;

class node{
public:

    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = this;              // every node will point to itself
    }

};

void InsertAtHead(node* &tail, int data){           // actually changing tail.next hence passing by reference
    node* temp = new node(data);
    temp->next = tail->next;
    tail->next = temp;
}      

void InsertNxtToElement(node* &tail, int ele, int data){
    node* temp = new node(data);
    node* curr = tail;

    while(curr->data != ele){
        curr = curr->next;
        if(curr == tail){
            cout<<"There is no such element present in LL"<<endl;
        }
    }
    temp->next = curr->next;
    curr->next = temp;
}

void DeleteElement(node* &tail, int ele){

    if(tail == NULL){
        cout<<"There is no element to delete."<<endl;
        return;
    }

    node* temp = tail;
// if there is only one node
    if(temp->next == tail){
        tail = NULL;
        delete temp;
        return;
    }

    while(temp->next->data != ele){
        temp = temp->next;
    }
    node* NODETODEL = temp->next;
    temp->next = NODETODEL->next;          //tail->next node to be deleted

    NODETODEL->next = NULL;
    delete NODETODEL;

}


void printll(node* tail){
    // cout<<"we are in print....."<<endl;
    if(tail == NULL){
        cout<<"There is no element to print."<<endl;
        return;
    }
    node* temp = tail;

    if(temp->next == temp){
        cout<<temp->data<<" ";
    }else{
        do{
        cout<<temp->next->data<<" ";
        temp = temp->next;
        }
        while(temp != tail);
    }
    
    cout<<endl;
}

int main()
{
    node* node1 = new node(10);
    node* tail = node1;

    // cout<<tail->data<<" ";
    // cout<<tail->next->data<<endl;

    // InsertAtHead(tail, 5);          // we dont need this func as well cause of InsertNxtToElement
    // printll(tail);

    // InsertNxtToElement(tail, 5, 20);
    // printll(tail);
    // InsertNxtToElement(tail, 20, 30);
    // printll(tail);

    DeleteElement(tail, 10);
    printll(tail);


    return 0;
}