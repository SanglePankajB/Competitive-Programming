//Circular Queue->

//  The only diff. bet linear & Circular is that the rear and the front ends are connected in this Queue. There is no end in this Queue. This specialty gives rise to a lot of benefits.

//  In a circular queue, elements can be added easily if the Queue isn’t full. But in the linear Queue, elements can’t be added furthermore, once the rear-end points to the last index. 

// Circular Queue is more memory efficient than a linear Queue as we can add elements until complete. Thus, no space is left over. 
// While in a linear queue, once the Queue is full, if we start to dequeue, the front indexes become vacant, and then they can never be filled. Thus, there is a wastage of space.

#include<bits/stdc++.h>
using namespace std;

class circularQ{
    int *arr;
    int size = 5;
    int qfront;
    int rare;

public:
    circularQ(){
        arr = new int[size];
        qfront = 0;                  // We are creating Q means creating arr and qfront & rare are starting indexes
        rare = 0;
    }

    bool isfull(){
        if(rare == size && qfront == 0){
            return 1;
        }else if(qfront - rare == 1){       // we are sacrifysing 1 element to make it work properly(means if size of Queue is 5 then we can add only 4 if we deque one of element in between otherwise we can add all elements)
            return 1;
        }else return 0;
    }

    bool isempty(){
        if(qfront == rare){
            return 1;
        }else return 0;
    }

    void enq (int data){
        if(isfull()){
            cout<<"Queue is full\n";
            return;
        }else{
            arr[rare] = data;
            rare++;
            if(rare == size && qfront != 0){        // which means there is space at front of queue
                rare = 0;
            }
        }
    }
    int deq (){
        if(isempty()){
            cout<<"There is no element to deq.\n";
            return -1;
        }else{
            int ans = arr[qfront];
            qfront++;
            if(qfront == size){
                qfront = 0;
            }
            return ans;
        }
    }

};

int main()
{
    circularQ q;

    if(q.isempty()){
        cout<<"Empty\n";
    }else cout<<"Not Empty\n";

    if(q.isfull()){
        cout<<"Full\n";
    }else cout<<"Not Full\n";

    q.deq();
    q.enq(1);
    q.enq(2);
    q.enq(3);

    cout<<q.deq()<<endl;

    if(q.isempty()){
        cout<<"Empty\n";
    }else cout<<"Not Empty\n";

    if(q.isfull()){
        cout<<"Full\n";
    }else cout<<"Not Full\n";

    q.enq(1);
    q.enq(4);
    q.enq(5);

    if(q.isfull()){
        cout<<"Full\n";
    }else cout<<"Not Full\n";

    
    return 0;
}

// Every operation is having time comp O(1) --> in constant time
