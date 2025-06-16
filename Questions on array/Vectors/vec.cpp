
// Vectors in C++ are arrays that can change in size(dynamically change their size)

// size() fun works perfect in both string and vector cases for printing purposes

//              .size(), push_back(), pop_back()  comes with time complexity O(1)

#include<bits/stdc++.h>
using namespace std;

// Function for printing int vector
void printvec(vector<int> v){
    for(int i =0;i<v.size();i++){
        cout<<v[i];
    }
}

int main()
{
    vector<int>pankaj;         // Declaration syntax

    for (int i=6;i>0;i--){
        pankaj.push_back(i);
    }
    // cout<< pankaj.size();          // will give size 6
    printvec(pankaj);
    cout<<endl;




    vector<int>v(10,1);    // declaration of vec with size 10 & assigning 1 to all positions
    printvec(v);
    v.push_back(7);       // now size becomes 11 & 11th element is 7
    cout<<endl;
    printvec(v);
    cout<<endl;
    v.pop_back();
    printvec(v);

//  Copy Operation in vector
    vector<int > cp = v;

    return 0;
}