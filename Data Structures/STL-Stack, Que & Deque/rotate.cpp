#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int >v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(9);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    // cout<<"\nVector after rotate: "<<endl;
    // rotate(v.begin(),v.begin()+1, v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    cout<<"\nAgain Vector after rotate: "<<endl;
    rotate(v.begin(),v.begin()+2, v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}