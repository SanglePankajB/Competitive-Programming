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
    node* temp = new node(data);            
    temp->next = head;                  
    head = temp;

}


void printll(node* &head){
    node* temp = head;       
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
bool ispalindrome(node* head){
    vector<int> arr;

    while(head != NULL){
        arr.push_back(head->data);
        head = head->next;
    }
    for(int i=0;i<arr.size()/2;i++){
        if(arr[i] != arr[arr.size() - 1-i]){
            return 0;
        }
    }
    return 1;
}

int main()
{

    node* node1 = new node(30);

    node* head = node1;

    InsertAtHead(head, 20);      
    InsertAtHead(head, 10);
    InsertAtHead(head, 20);      
    InsertAtHead(head, 30);
    InsertAtHead(head, 30);

    cout<<"Our LL is : "; printll(head);

    if(ispalindrome(head)){
        cout<<"LL is a Palindrome.";
    }else cout<<"LL is not Palindrome.";


    return 0;
}