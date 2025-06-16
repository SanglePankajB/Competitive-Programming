#include<bits/stdc++.h>
using namespace std;

bool check(int arr[2][2]){
        
    if(arr[0][0] > arr[0][1] || arr[0][0] > arr[1][0]){
        return false;
    }
    if(arr[1][0] > arr[1][1] || arr[1][1] < arr[0][1]){
        return false;
    }

    return true;
    
}

int main()
{
    int t;cin>>t;
    int arr[2][2];
    

    while(t--){
        bool flag = false;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>arr[i][j];
            }
        }
        int i = 4;
        while(i--){
            swap(arr[0][0], arr[0][1]);
            swap(arr[1][0], arr[1][1]);
            swap(arr[0][0], arr[1][1]);
            if(check(arr)){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    
    }

    return 0;
}