#include<iostream>
#include<map>               // header file for map
using namespace std;

// Maps in cpp == Dictionaries in python
//   Maps are part of the C++ STL. Maps are containers that store 'sorted' key-value pair, in which each key is unique and it can be inserted or deleted but cannot be altered. Values associated with keys can be changed
//  2 Types:    i) Ordered Map (Sorted)
//              ii) Unordered map (random)

int main()
{
    map<int, string> mp;

    mp[1] = "Pankaj";
    mp[3] = "Sangle";         //  -----> these will be stored in 'sorted' key-value pairs
    mp[4] = "King";
    mp[2] = "Bhausaheb";

    mp.insert({6, "Siddhesh"});         //  insert op

    cout<<"size----> "<<mp.size();
    cout<<"\nat 1----> "<<mp.at(1)<<endl;


    // THis is how we print using auto && i.first, i.second
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;     
    }

    cout<<"find : "<<mp.count(1)<<endl;         // return 1 if present 0 if not found

    return 0;
}