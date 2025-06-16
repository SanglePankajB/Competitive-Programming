// Pointer data type should be same as the datatype of variable of which it is storing address of
// e.g int a = 10; ---> int *ptr = &a;
// e.g string a = "man"; ---> string *ptr = &a;
// e.g node a; ---> node *ptr = &a;

// size of pointer :    8 bytes for 64 bit computer  & 4 bytes for 32 bit computer





#include<bits/stdc++.h>
using namespace std;

string manipulate (string* s){
    *s = "PANKAJ";                  // we need to change the value at pointer/address s
    return *s;
}

void arr(int arr[],int size){       // which is same as ==> void arr(int *arr,int size)
    arr[size]={0};
}
int main()
{
    // string s = "pankaj";
    // cout<<manipulate(&s)<<endl;  // passing address of string s
    // cout<<s;


//  In case of array 
//    1. arr itself means the address of first element 
//  e.g
    int arrr[5] = {1,2,3,4,5};
    int n = 5;

    cout<<arrr<<endl;
    cout<<&arrr[0]<<endl;

    cout<<*arrr<<endl;       // always remember * always comes before address and means value at that address
    // cout<<*arr+3<<endl;
    cout<<*(arrr+3)<<endl;       // this means value at address arr+3(3rd index)
    cout<<(*arrr)+6<<endl;
// Conclusion : 
//          arrr[i] == *(arrr + i)
//     ---> i[arrr] == *(i + arrr)

// Note: 
// size of address is 8 bytes, size of int is 4 bytes

    int *ptr = &arrr[0];    // which is same as ===>  int *ptr = arrr;
    cout<<ptr<<" Size of ptr is : "<<sizeof(ptr)<<endl;             
    cout<<" Size is : "<<sizeof(&arrr[0])<<endl;             
    cout<<"value at ptr: "<<*ptr<<" Size of value at ptr is : "<<sizeof(*ptr)<<endl;   // it should be 4

    int *pt = arrr;
    cout<<"pt[2] : "<<pt[2]<<endl;      // will print 3

//  we cant do 
    // arrr = arrr+1;
//  can do
    // ptr = ptr+1;     // It will now be pointing to 2nd element rather than changing its own address


//🦢  Character Array
    cout<<"Character Array:\n";
    char str[7] = "pankaj";
    cout<<str<<endl;
    // int *p = str;
    // cout<<p<<endl;

    return 0;
}

