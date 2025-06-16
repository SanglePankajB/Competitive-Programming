#include<iostream>
#include<queue>

using namespace std;

void printQ(queue<string> s){
    int len = s.size();         // when we include it in for as i<s.size()it does'nt work cause size of queue gets change every time(as it is dynamic), we dont want to change the size in every iteratio so we calculate len first
    for(int i=0;i<len;i++){
        cout<<s.front()<<" ";
        s.pop();
    }
}

int main()
{
    queue<string> Q;
    Q.push("Mr.");
    Q.push("Pankaj");
    Q.push("Bhausaheb");
    Q.push("Sanlge");
    Q.push("Sir");

    //  A Queue is a linear structure which follows order First In First Out (FIFO) ...
    // Hence if we pop then in that case what should be printed: 
    
    cout<<"\nThis is Q: ";
    printQ(Q);

    cout<<"\n"<<Q.front();
    Q.pop();          // It will pop the first element as the proiperty of Queue

    

    return 0;
}