//👌👌IMP👌👌

// when we start executing any programm compiler allocates some memory for that program 
// these memory are of two types : 1. Stack (Static)     2. Heap (Dynamic)
// memory allocated is always stack mem (stack memory is much smaller than Heap mem), 
// 👍so if we declare let say array of much bigger size than the stack mem which is allocated to this program then program will crash👍
// hence we should avoid runtime declaration of array
// declaration should be static so it will bring the required memory with it while running program  OR we should declare array dynamically (🦢 when we declare something dynamically Heap mem. is allocated in that case)
//      |---------|             |-------------------|
//      |Stack Mem|             |                   |
//      |---------|             |     Heap Mem      |
//                              |                   |
//                              |                   |
//                              |-------------------|
//
// when some memory is allocated in Heap then its pointer is stored in stack memory not in Heap
// “Heap” memory, also known as “dynamic” memory, is an alternative to local stack memory--> from Google
// Heap space is used for the dynamic memory allocation 

#include<iostream>
using namespace std;

int main()
{
    // syntax of creating anything in heap (dynamic mem allocation)
    // new char;        // ...and we store this address into pointer and that pointer is stored at stack mem

    char* pankaj = new char;
    *pankaj = 'P';      // value at address pankaj is assigned to 'P'
    cout<<*pankaj;

    // creating dynamic integer arr 
    // new int[20]
    int *arr = new int[20];     // In this case total mem is (20*4(size of arr) + 8(pointer))bytes
    // Hence stack memory is 8 bytes and Heap memory is 80 byte above

    return 0;
}