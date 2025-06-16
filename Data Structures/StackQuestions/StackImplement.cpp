
// Creating Stack using array

#include<iostream>
using namespace std;

class Stack{
    public:

    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void Push(int data){
        if(size-top > 1){
            top++;              // we're first incrementing as top is -1
            arr[top] = data;
            
        }else cout<<"stack overflow."<<endl;
    }

    void pop(){
        if(top >= 0){
            top--;
        }else cout<<"Stack underflow - there is no value in stack"<<endl;
    }

    int peak(){
        if(top>=0 && top<size){
            return arr[top];                // size of arr is 6 but last ele is at 5 so we have to initialize top with -1 
        }else {cout<<"stack is empty";
        return -1;
        }
    }

    void isEmpt(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return;
        }else cout<<"Not empty"<<endl;
    }

};

int main()
{
    Stack st(6);

    st.isEmpt();

    st.Push(10);
    st.Push(20);
    st.Push(30);

    cout<<"The peak is : "<<st.peak()<<endl;

    st.pop();
    cout<<"The peak is : "<<st.peak()<<endl;

    return 0;
}