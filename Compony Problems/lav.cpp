#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "raja11222soft";
    string ans = "";

    int other = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]>='a' & str[i]<='z' | str[i]>='A' & str[i]<='Z'){
            other++;
        }else{
            ans+=str[i];
        }
    }
    vector<char> v;

    for (int i = 0; i < ans.size(); i++)
    {
        bool flag = false;
        for (int m = 0; m <v.size() ; m++)
        {
        if(ans[i] == v[m]){
            flag = true;
        }
        }
        if(flag){
            continue;
        }else{
            v.push_back(ans[i]);
        }
        
        int cnt = 1;
        for (int j = i+1; j < ans.size(); j++)
        {
            if(ans[i] == ans[j]){
                cnt++;
            }
        }
        cout<<ans[i]<<" : "<< cnt<<", ";
        
    }
    cout<<"other : "<<other<<endl;
    

    return 0;
}