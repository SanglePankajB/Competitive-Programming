#include<iostream>
#include<algorithm>                 // header file for algos
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(8);
    v.push_back(2);
    v.push_back(0);

    sort(v.begin(), v.end());               // sorting vectors

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // from algorithms using binary search

    cout<<"\nBinary search : "<< binary_search(v.begin(), v.end(), 8);        // will return true or false
    
    // All inbuilt functios are part of algo e.g sort, reverse, swap,..etc

    return 0;
}