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

void InsertAtTail(node* &tail, node* head, int data){           // here we're passing just copy of head node not a reference like other functions. In this way we dont need to worry about any changes in LL (nothing is gonna change) 
    node* temp = new node(data);
    while (head->next!=NULL)
    {
        head = head->next;
    }
    head->next = temp;
    tail = temp;
}

void InsertAtPosition(node* &head, int pos, int data){

    if(pos == 1){
        InsertAtHead(head, data);
        return;
    }

    node* temp = new node(data);
    node* current = head;
    int count = 1;
    while(count<pos-1){
        current = current->next;
        count++;
    }
    // there is no need to create below
    // if(current->next == NULL){
    //     InsertAtTail(head, data);
    //     return;
    // }
    temp->next = current->next;
    current->next = temp;
    // temp->next = current->next;       we can't do this cause in above line current->next has already changed
}
// Alternately: 
// void InsertAtPosition(node* head, int pos, int data){    here we are not creating another current node
//     node* temp = new node(data);
//     int count = 1;
//     while(count<pos-1){
//         head = head->next;
//         count++;
//     }
//     temp->next = head->next;
//     head->next = temp;
// }

void DeleteAtPosition(node* &head, int pos){
    if(pos == 1){
        node* temp = head;      // creating temp node which is copy of head changes in temp will not affect head
        head = head->next;

        temp->next = NULL;      // these two lines are imp (1st make next pointer null, then delete node)
        delete temp;

    }else{
        node* temp = head;      // creating temp node which is copy of head changes in temp will not affect head
        while((pos-2)!=0){      // if pos is 3 then we stop at 2 & remember we start from 1
            temp = temp->next;
            pos--;
        }
        node* del = temp->next;    // these two lines are imp (1st make next pointer null, then delete node)
        temp->next = del->next;

        // if(del->next == NULL){       we need to pass tail in function to change the tail
        //     tail = temp;
        // }

        del->next = NULL;
        delete del;
        // cout<<"temp->data: "<<temp->data<<endl;
        // cout<<"head->data: "<<head->data<<endl;
    }
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
    node* node1 = new node(20);

    node* head = node1;
    node* tail = node1;

    InsertAtHead(head, 10);        // After Insertion of head node 1->data is now 20
    
    InsertAtTail(tail, head, 30);       // here tail is current tail (we can change func as we want)
    printll(head);

    InsertAtPosition(head, 3, 25);
    printll(head);
    
    InsertAtPosition(head, 1, 0);
    printll(head);

//  deleting at last
    DeleteAtPosition(head, 5);
    printll(head);
// deleting head
    DeleteAtPosition(head, 1);
    printll(head);

    return 0;
}