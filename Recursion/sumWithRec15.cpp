#include<bits/stdc++.h>
using namespace std;

#define ll long long;
#define vint vector<int>;
#define vb vector<bool>;

// sum of all element of array

int countSum(int *arr, int size){
    if(size == 0 ){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }else{
        return arr[0] + countSum(arr+1, size-1);
    }
}

int main()
{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);

    int arr[6] = {1,2,3,4};

    cout<<countSum(arr, 4);

    return 0;
}