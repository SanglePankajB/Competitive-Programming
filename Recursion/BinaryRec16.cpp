#include<bits/stdc++.h>
using namespace std;

bool binaryrec(int *arr, int s,int e, int key)
{
    if(s>=e){
        return false;
    }
    int mid = (s+e)/2;

    if(arr[mid] == key){
        return true;
    }

    if(arr[mid]>key){
        return binaryrec(arr, s, mid-1, key);
    }else{
        return binaryrec(arr, mid+1, e, key);
    }
    


}

int main()
{
    // Array should  be sorted 
    int arr[6] = {1,2,4,7,28,38};
    
    if(binaryrec(arr, 0, 5, 8)){
        cout<<"Present";
    }else{
        cout<<"Not Present";
    }

    return 0;
}