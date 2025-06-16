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


void PrintLL(node* head)
{
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
bool ispalindrome(node* head){
    
    // 1st find tail
    node* tail = head;
    node* temphead = head;      // we are keeping head safe 😅

    while(tail->next != NULL){
        tail = tail->next;
    }

    while(tail != head){
        if(temphead->data != tail->data){
            return 0;
        }
        temphead = temphead->next;
        tail = tail->prev;
    }
    return 1;

}

int main()
{


    node* head = NULL;
    node* tail = NULL;
    

    InsertAtHead(head, 30);
    InsertAtHead(head, 20);
    InsertAtHead(head, 10);
    InsertAtHead(head, 10);
    InsertAtHead(head, 20);
    InsertAtHead(head, 30);


    cout<<"Our LL is : ";
    PrintLL(head);

    if(ispalindrome(head)){
        cout<<"LL is a Palindrome.";
    }else cout<<"LL is not Palindrome.";

    
    return 0;
}