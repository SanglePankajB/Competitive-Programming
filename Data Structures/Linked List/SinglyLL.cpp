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
/*
Question : What is meaning of node8 &head below? 
--->  We're inserting a node before head means we're going to assign new head at old head's position, hence for that in our function we're gonna need prev Head and a node to assign as new head (In our case we are not having node we're having data of new node which we are gonna make head node).
    Here Hence there are two arguments 1st is Prev Head node and second is data which is integer in this case
---> node* &head means head is a node (dynamically created hence * which pointing to node at heap), we're using &head cause we dont want to pass copy of head node, Hence we're passing reference node(like ref. var.)
*/
void InsertAtHead(node* &head, int data)    
{
    node* temp = new node(data);            // we're creating new node from the data
    temp->next = head;                  //  Now assigning this node as head by these 2 lines
    head = temp;

}

void InsertAtTail(node* head, int data){           // here we're passing just copy of head node not a reference like other functions. In this way we dont need to worry about any changes in LL (nothing is gonna change) 
    node* temp = new node(data);
    while (head->next!=NULL)
    {
        head = head->next;
    }
    head->next = temp;
    cout<<"This is after making head as temp : "<<head->data<<endl;
}


// Printing linked list

void printll(node* &head){
    node* temp = head;       // we've created a temp node equal to head node in this way we dont change in actual ll

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
/* IMP 
    If in above we write    while(temp->next!=NULL)    then we won't be able to print last node because
    lets visualize :
    temp is a pointer which is pointing to head node & temp->next is pointer to head.next in begining
    now lets say we are at last node, here temp->next becomes NULL in this case we are not entering into loop so technically we are not printing the data of last node, & HENCE to enter we are not checking whether next node is empty or not we're checking self node is empty or not
*/
    cout<<"This is actual head after printing LL: "<<head->data<<endl;
    cout<<endl;
}

int main()
{
//  Avoid this and assign node 1 as head as mentioned in SinglyLL2
    node* node1 = new node(10);
    InsertAtHead(node1, 20);        // After Insertion of head node 1->data is now 20
    printll(node1);
    
//  see SinglyLL2  if you dont want to change node 1->data 

    cout<<"This is node 1 data : "<<node1->data<<endl;    // Node 1 now have became head

    InsertAtTail(node1, 30);
    printll(node1);
    // cout<<"Data : "<<node1->next->next->data<<endl;

    return 0;
}