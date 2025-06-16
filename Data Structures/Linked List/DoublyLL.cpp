#include<bits/stdc++.h>
using namespace std;

class node{
public:

    int data;
    node* prev;
    node* next;

    node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void InsertAtHead(node* &head, int data){

//  IF LL is empty
    if(head == NULL){
        node* node1 = new node(data);
        head = node1;
        return;
    }

    node* temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;

}
void InsertAtTail(node* head, int data){

//  IF LL is empty
    if(head == NULL){               // we can have tail node as well
        node* node1 = new node(data);
        head = node1;
        return;
    }

    node* temp = new node(data);
    while(head->next!=NULL){
        head = head->next;
    }
    head->next = temp;
    temp->prev = head;

}
void InsertAtPosition(node* head, int pos, int data){
    if(pos == 1){
        InsertAtHead(head, data);
        return;
    }
    node* temp = new node(data);
    while((pos-2)!=0){
        head = head->next;
        pos--;
    }
    node* curr = head->next;        //  node to be replaced
    head->next = temp;
    temp->prev = head;
    temp->next = curr;
}

//   Deletion 
void DeleteAtPosition(node* &head, int pos){
    if(pos == 1){
        node* temp = head;
        head = head->next;     // we are changing actual head not copy of head so remember to pass head as reference
        head->next->prev = NULL;

        temp->next = NULL;      // these two line imp (1st mark pointer as null and then delete)
        delete temp;
    }else
    {
        node* temp = head;
        while((pos-2)!=0){              // we are comming to prev node of deleting node
            temp = temp->next;
            pos--;
        }
        node* nodeToBedel = temp->next;
        temp->next = nodeToBedel->next;
        nodeToBedel->next->prev = temp;         // as it is doubly linked

        nodeToBedel->next = NULL;   //deletion
        delete nodeToBedel;
    }

}

void PrintLL(node* head)
{
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int LenLL(node* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}

int main()
{
    // node* node1 = new node(20);

    // node* head = node1;            // Creating head node and assigning it to node1

//  What if there is no preexisted node OR there is no head node yet

    node* head = NULL;
    node* tail = NULL;
    
    InsertAtHead(head, 10);
    InsertAtHead(head, 5);
    PrintLL(head);

    InsertAtTail(head, 30);
    PrintLL(head);

    InsertAtPosition(head, 4, 25);
    PrintLL(head);

    InsertAtPosition(head, 5, 40);  // inserting at last(tail)
    PrintLL(head);
    cout<<"Current Length of List is: "<<LenLL(head)<<endl;

    DeleteAtPosition(head,1);
    PrintLL(head);
    // DeleteAtPosition(head,2);
    // PrintLL(head);

    return 0;
}