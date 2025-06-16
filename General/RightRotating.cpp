#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "pankaj";
    string b = "ajpank";

    bool flag = true;

    int i;
    for (i = 0; i < b.size(); i++)
    {
        if(a[0] == b[i]){
            break;
        }
    }
    
    int k = 0;
    for (int j = i; j < b.size(); j++,k++)
    {
        cout<<a[k]<<" "<<b[j]<<endl;
        cout<<k<<" "<<j<<endl;

        if(a[k] != b[j]){
            cout<<"This is wrong"<<endl;
            flag = false;
            break;
        }

        if(k == a.size()-1){
            break;
        }

        if(j==b.size()-1){
            j = -1;
        }
    }
    
    if(flag){
        cout<<"Yes It is Right Rotating";
    }else{
        cout<<"No it is not Right Rotating";
    }
    

    return 0;
}


