// Two Stack implementation in one array 


#include<iostream>
using namespace std;

class Stack{
    public:

    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void Push1(int data){           // push1 for pushing into stack 1
        if(top2-top1 > 1){
            top1++;                // we're first incrementing as top is -1
            arr[top1] = data;
            
        }else cout<<"stack overflow."<<endl;
    }
    void Push2(int data){           // push2 for pushing into stack 2
        if(top2-top1 > 1){
            top2--;                
            arr[top2] = data;
            
        }else cout<<"stack overflow."<<endl;
    }

    void pop1(){
        if(top1 >= 0){
            top1--;
        }else cout<<"Stack underflow - there is no value in stack"<<endl;
    }
    void pop2(){
        if(top2 < size){
            top2++;
        }else cout<<"Stack underflow - there is no value in stack"<<endl;
    }

    int peak1(){
        if(top1>=0 && top1<size){
            return arr[top1];                // size of arr is 6 but last ele is at 5 so we have to initialize top with -1 
        }else {cout<<"stack is empty";
        return -1;
        }
    }
    int peak2(){
        if(top2<6 && top2>=0){
            return arr[top2];                // size of arr is 6 but last ele is at 5 so we have to initialize top with -1 
        }else {cout<<"stack is empty";
        return -1;
        }
    }

    void isEmpt(){
        if(top1 == -1){
            cout<<"Stack1 is empty"<<endl;
            
        }else cout<<"Stack1 Not empty"<<endl;

        if(top2 == size){
            cout<<"Stack2 is empty"<<endl;
            
        }else cout<<"Stack2 Not empty"<<endl;
    }

};

int main()
{
    Stack st(6);

    st.isEmpt();

    st.Push1(10);
    st.Push1(20);
    st.Push2(50);

    cout<<"The peak1 is : "<<st.peak1()<<endl;

    cout<<"The peak2 is : "<<st.peak2()<<endl;

    st.pop1();
    cout<<"The peak1 is : "<<st.peak1()<<endl;


    return 0;
}