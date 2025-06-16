#include<bits/stdc++.h>            // header file for map
using namespace std;

int main()
{
    map<int, list<int>> mp;

    mp[1] = {2,3,4,5,6};
    mp[2] = {2,3,6};
    mp[3] = {1,2,3};

    cout<<"size--> "<<mp.size()<<endl;
    // cout<<"\nat 1----> "<<mp.at(1)<<endl;


    // THis is how we print using auto && i.first, i.second
    for(auto i:mp){
        cout<<i.first<<endl;     
    }
    // for(int i:lst){
    //     cout<<i<<" ";
    // }

    return 0;
}