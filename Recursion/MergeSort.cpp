
// Time complexity of recursion depends on two factors: 1) Total number of recursive calls  
//                2) Time complexity of additional operations for each recursive call.



// Learning of the Day:
    // You mess with mid, mid will make your life mess 

// Merge Sort

#include<bits/stdc++.h>
using namespace std;
void merj(int arr[], int l, int r){    // Most imp : *arr (otherwise it will make copy and change the copu only)
//                                      If we want ot make changes in our origianal arr then we use *arr
    int mid = (l+r)/2;       // Mid is always calculated as this remember and never mess
    
    int s1 = mid-l+1;          // 'size' of subArray1
    int s2 = r-mid;             // size of subArray2

    int temp1[s1];        // int *temp1 = new int[s1];
    int temp2[s2];
    for(int i=0;i<s1;i++){
        temp1[i] = arr[l+i];
    }
    for(int i=0;i<s2;i++){
        temp2[i] = arr[mid+1+i];        // mid is index of middle
    }
    int k =0;
    int m =0;
    int i=l;    // Array index will start from l (we're not having entire Arr, We're having it starting from l)

    while(k<s1 && m<s2){             // s1 & s2 are sizes not indexes hence using < not <=
        if(temp1[k]<temp2[m]){
            arr[i] = temp1[k];
            k++;
            i++;
        }else{
            arr[i++] = temp2[m++];
            // m++;
            // i++;
        }
    }
    while(k<s1){
        arr[i++] = temp1[k++];
        // k++;
        // i++;
    }
    while(m<s2){
        arr[i] = temp2[m];
        m++;
        i++;
    }
}
void sort(int arr[], int l, int r){
    if(l>=r){
        return;
    }
    int mid = (l+r)/2;

    sort(arr, l, mid);
    sort(arr, mid+1, r);
    merj(arr, l, r);
}

int main()
{
    int arr[5] = {5,4,3,2,1};
    sort(arr, 0, 4);     // sort(Arr[], starting index of arr, ending index) not the size of arr
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}