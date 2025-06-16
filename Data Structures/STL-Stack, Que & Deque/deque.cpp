

// Deque or Double Ended Queue is a type of 'queue' in which insertion and removal of elements can either be performed from the front or the rear. Thus, it does not follow FIFO rule (First In First Out).


#include<iostream>
#include<deque>
using namespace std;


int main(){

    deque<int> d;
    cout<<"-----------------------------------------------\n\n";
    d.push_back(5);
    for(int i=0;i<d.size(); i++){
        cout<<d[i]<<" ";
    }cout<<endl;

    d.push_back(10);
    for(int i=0;i<d.size(); i++){
        cout<<d[i]<<" ";
    }cout<<endl;

    d.push_back(15);
    for(int i=0;i<d.size(); i++){
        cout<<d[i]<<" ";
    }cout<<endl;

    d.push_front(0);
    for(int i=0;i<d.size(); i++){
        cout<<d[i]<<" ";
    }cout<<endl;
    cout<< "Following are poping operations : \n";

    d.pop_back();
    cout<<"This is pop back :"<<endl;
    for(int i=0;i<d.size(); i++){
        cout<<d[i]<<" ";
    }cout<<endl;
    d.pop_front();
    cout<<"This is pop front :"<<endl;
    for(int i=0;i<d.size(); i++){
        cout<<d[i]<<" ";
    }

    // Erase
    d.erase(d.begin(), d.end());     // erase all
    cout<<"\nAfter Erase:"<<endl;

    cout<<"Is empty or not : \n";       // Empty
    if(d.empty()) cout<<"Empty";

    

    return 0;
}