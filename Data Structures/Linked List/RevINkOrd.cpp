#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data ;
    node* next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void InsertAtTail(node* head, int data){          
    node* temp = new node(data);
    while (head->next!=NULL)
    {
        head = head->next;
    }
    head->next = temp;
}

void printll(node* &head){
    node* temp = head;       // we've created a temp node equal to head node in this way we dont change in actual ll

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// Reversing in k order
node* revINk(node* &head, int k){

    if(head == NULL){
        return head;
    }
    int count = 0;
    node* curr = head;
    node* prev = NULL;
    node* next = NULL;

    while(curr != NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next!=NULL){
        head->next = revINk(next, k);
    }
    return prev;
}

int main()
{
    node* node1 = new node(10);
    node* head = node1;
    printll(head);
    
    InsertAtTail(head, 20);
    InsertAtTail(head, 30);
    InsertAtTail(head, 40);
    InsertAtTail(head, 50);

    printll(head);
    cout<<"Reverse in k order"<<endl;

    node* m = revINk(head, 2);
    printll(m);

    return 0;
}