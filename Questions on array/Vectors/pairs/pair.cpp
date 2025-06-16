#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    p = {1, "Pankaj"};

    pair<int, string> p1 = p;         // we've created the copy
    p1.first = 3;
    cout<<p1.first<<" "<<p1.second<<endl;

    // cin>>p.first     for input

    pair<int, string> &p2 = p;        //& operator for reference (now if we change value of p2 it will affect value of p)
    p2.first = 3;
    cout<<p.first<<" "<<p.second<<endl;



//  Pair of array
    // int a[] = {1,2,3};
    // int b[] = {2,3,4};
    pair<int, int> p_arr[3];
    p_arr[0] = {1,2};
    p_arr[1] = {2,3};
    p_arr[2] = {3,4};

    swap(p_arr[0], p_arr[2]);

    // For printing pairs:
    for (int i = 0; i < 3; i++)
    {
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<", ";
    }
    




    return 0;
}