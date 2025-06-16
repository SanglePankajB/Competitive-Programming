
/* A void pointer is a pointer that has no associated data type with it. 
A void pointer can hold address of any type and can be typecasted to any type.
*/ 

#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int c = 5;
    char b = 'x';

    int* ptr = &a;          // ptr stores addresss of a
    cout<<ptr<<" ";
    ptr = &c;           // ptr now stores addresss of c
    cout<<ptr;
//  Above in this case we cant store address of char into int ptr, Hence we use void pointer

     cout<<endl;

    void* p = &a;          // void pointer holds address of int 'a'
    p = &b;                   // void pointer holds address of char 'b'

    // cout<<*p;        We can't print value of void pointer as it does not declare which type of value it holds
    cout << *(int *)p << endl;      // Typecasting

    return 0;
}

// calloc() and malloc() returns the void pointers and this allows these functions to be used to allocate memory of any data type 