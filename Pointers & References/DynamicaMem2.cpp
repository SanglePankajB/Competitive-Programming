
// Note: Don't run this program

// Stack mem is smaller than Heap Mem

// In Static allocation your memory gets released automatically at the end of scope
// In dynamic allocation we need to free the mem manually

#include<bits/stdc++.h>
using namespace std;

int main()
{
//  Case 1: 
    while (true){
        int a = 5;
    }

//  Case 2:
    while(true){
        int *a = new int;
        delete a;           // we manually free dynamically allocated memory
    }

// In case 1, In every iteration we allocate stack mem of 4 byte and when we exit while loop then stack mem gets released(empty)
// In case 2, In every iteration we allocate Dynamic mem of 4 byte of int + 8 bytes of pointer(stack) and when we exit while loop then stack mem gets released but Dynamic mem (Heap) Memory does not get relseased


    return 0;
}