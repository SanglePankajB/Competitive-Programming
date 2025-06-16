#include<bits/stdc++.h>
using namespace std;

void sayDigits(string arr[], int n){
    if(n == 0){
        return;
    }

    int lastdigit = n%10;
    n = n/10;
    // cout<<arr[lastdigit]<<" ";
    sayDigits(arr, n);
    cout<<arr[lastdigit]<<" ";

}

int main()
{
    string arr[10] = {"Zero", "One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    int n;cin>>n;
    sayDigits(arr, n);

    return 0;
}