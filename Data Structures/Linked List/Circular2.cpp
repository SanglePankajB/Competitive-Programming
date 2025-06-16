//  whether ll is circular or not ?

#include<bits/stdc++.h>
using namespace std;

class node{
public:

    int data;
    node* next;

    node(int data){
        this->data = data;
        this->next = this;      // every node will point to itself
    }
};

void InsertAtHead(node* &tail, int data){           // actually changing tail.next hence passing by reference
    node* temp = new node(data);
    temp->next = tail->next;
    tail->next = temp;
}    

// Circular or not
void CIrcular(node* tail){

    if(tail == NULL){
        cout<<"List is empty...";
        return;
    }
    if(tail->next == tail){
        cout<<"List is Circular...";
        return;
    }
    
    node* temp = tail;

    while(1){
        if(temp == NULL){
            cout<<"LL is not circular."<<endl;
            return;
        }
        if(temp->next == tail){
            cout<<"LL is Circular."<<endl;
            return;
        }
        temp = temp->next;
    }
}

void printll(node* tail){

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

    InsertAtHead(tail, 5);          // we dont need this func as well cause of InsertNxtToElement
    InsertAtHead(tail, 1);

    // cout<<tail->next->data <<" ";
    CIrcular(tail);


    return 0;
}