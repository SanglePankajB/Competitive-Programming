#include<bits/stdc++.h>
using namespace std;

// int secondmax(int arr[], int sizeofArr){
//     sort(arr, arr+8);

//     cout<<arr[sizeofArr-1] - arr[1];

// }

void sol(string a){
    int other = 0;
    // vector<pair<char, int>> mp;
    set<char> st;

    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]>='a' && a[i]<='z' | a[i]>='A' && a[i]<='Z'){
            other++;
        }else{
            st.insert(a[i]);
        }
    }

    string setstring = "";

    for(int i:st){
        setstring+=i;
    }

    for (int i = 0; i < setstring.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < a.size(); j++)
        {
            if(setstring[i] == a[j]){
                count++;
            }
        }
        cout<<setstring[i]<<" : "<<count;
        
        
    }
    cout<<"other : "<<other;
    
}


int main()
{
    // int size = 8;
    // int arr[8] = {14,12,70, 95, 65, 22, 30, 15};
    // secondmax(arr, size);

    // for (int i = 0; i < 8; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }


    sol("raja12211labs");
    


    return 0;
}