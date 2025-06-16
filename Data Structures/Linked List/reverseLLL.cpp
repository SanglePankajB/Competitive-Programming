#include<bits/stdc++.h>
using namespace std;

class node{
public:

    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(node* &head, int data)    
{
    node* temp = new node(data);            // we're creating new node from the data
    temp->next = head;                  //  Now assigning this node as head by these 2 lines
    head = temp;

}

void printll(node* &head){
    node* temp = head;       // we've created a temp node equal to head node in this way we dont change in actual ll

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// Approach 1 -
void reverseLLL(node* head){

    if(head == NULL | head->next == NULL){
        cout<<head;
        return;
    }

    node* prev = NULL;
    node* curr = head;
    node* forward = NULL;

    while(curr!= NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    printll(prev);

}
// Approach 2-
node* reverseLList(node* head){

    if(head == NULL | head->next == NULL){
        return head;
    }

    node* prev = NULL;
    node* curr = head;
    node* forward = NULL;

    while(curr!= NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;

}

// Approach 3 - Recursive

void makereverse(node* &head, node* curr, node* prev){    // We're changing actual head so we pass by reference
    if(curr == NULL){
        head = prev;
        return;
    }
    makereverse(head, curr->next, curr);
    curr->next = prev;
}

void REVERSELinkedL(node* &head){        // We're changing actual head so we pass by reference
    node* prev = NULL;
    node* curr = head;
    makereverse(head, curr, prev);
    printll(head);
}




int main(){

    node* node1 = new node(30);
    node* head = node1;

    InsertAtHead(head, 20);
    InsertAtHead(head, 10);
    InsertAtHead(head, 6);
    InsertAtHead(head, 0);

    printll(head);
    cout<<"Reversed LL : ";
    // node* m = reverseLList(head);
    // printll(m);

    // cout<<"head = "<<head->next<<endl;

    // printll(head);
    REVERSELinkedL(head);
    
    return 0;
}
