#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4] = {2,1,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);
    cout<<endl;
    cout<<endl;
    for (int i=0;i<4;i++){
        cout<<arr[i];
    }

    return 0;
}