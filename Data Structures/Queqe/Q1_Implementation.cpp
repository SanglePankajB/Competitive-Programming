#include<bits/stdc++.h>
using namespace std;

class Que{
    int *arr;
    int size = 10000;
    int qfront;
    int rare;

public:

    Que(){
        arr = new int[size];
        qfront = 0;
        rare = 0;
    }
    bool isempty(){
        if(qfront == rare){
            return 1;
        }else return 0;
    }
    bool isfull (){
        if(rare == this->size){
            return 1;
        }else return 0;
    }

    void enq (int data){
        if(isfull()){
            cout<<"Queue is Full --> Can't add any elements.  \n";
            return;
        }else{
            arr[rare] = data;
            rare++;
        }
    }
    int deq(){
        if(isempty()){
            cout<<"Que is Empty.\n";
            return -1;
        }else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rare){
                qfront = 0;
                rare = 0;
            }
            return ans; 
        }
    }

};


int main()
{
    Que q;

    q.deq();

    q.enq(1);
    q.enq(2);
    q.enq(3);

    cout<<q.deq()<<endl;

    cout<<q.isempty()<<endl;
    cout<<q.isfull()<<endl;

    return 0;
}
/*
Above is normal working of Queue.

But it is not efficient if you have noticed when we are performing deq operation what we're doing is we're assigning that element as -1 and then we are moving our qfront ahead, so basically we're wasting that places cause our que is not starting from 1st index.

Eventually when q is full we can not add any element until we deq all the elements.

So, To avoid this wastage and non efficiency we 👍create 'circular Que'.
*/