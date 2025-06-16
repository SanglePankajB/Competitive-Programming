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

void InsertAtHead(node* &head, int data)    
{
    node* temp = new node(data);            // we're creating new node from the data
    temp->next = head;                  //  Now assigning this node as head by these 2 lines
    head = temp;

}
// Printing linked list

void printll(node* &head){
    node* temp = head;       // we've created a temp node equal to head node in this way we dont change in actual ll
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{

    node* node1 = new node(10);

    //  See diff bet SinglyLL & SinglyLL2
//  we can just create node head and assign it to node 1 
    node* head = node1;

    InsertAtHead(head, 20);      
    printll(head);

    cout<<"This is node 1 data : "<<node1->data<<endl;  
    cout<<"This is head data : "<<head->data<<endl;  

    InsertAtHead(head, 30);
    printll(head);


    return 0;
}