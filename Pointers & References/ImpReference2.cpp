#include<iostream>
using namespace std;

// we can have reference variable as input then same way we can have it as output too
//e.g

int& update(int a){         // see the  int&
    int &b = a;
    b = 1000;
    return b;       // here we are returning a reference variable (&var)
}

int* update1(int a){          // function is returning a pointer
    int *b = &a;         
    return b;       
}

int main()
{
    int a = 10;
    cout<<update(a)<<endl;
    cout<<"This is o/p of pointer returning fun: "<<update1(a);

    return 0;
}