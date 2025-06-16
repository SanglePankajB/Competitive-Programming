
// 4 Pillars of OOP:
//   1. Encapsulation
//   2. Abstraction
//   3. Polymorphism
//   4. Inheritance


// 4. Inheritance-----> c++ support 5 types of inheritance
// 1.simple inheritance
#include<bits/stdc++.h>
using namespace std;

// class Parent
// {
// public:
//     void par(){
//         cout<<"this is Parent";
//     }   
// };
// class Child:public Parent
// {
// public:
//     void simple(){
//         cout<<"this is child";
//     }
// };
// int main()
// {
//     Child A;
//     A.par();
//     return 0;
// }

// 2. Multiple
// class A
// {
// public:
//     void par(){
//         cout<<"this is Parent";
//     }   
// };
// class B
// {
// public:
//     void man(){
//         cout<<"this is B";
//     }   
// };

// class Child:public A, public B
// {
// public:
//     void simple(){
//         cout<<"this is child";
//     }
// };
// int main()
// {
//     Child A;
//     A.par();
//     return 0;
// }

// 3. Multilevel
// class A
// {
// public:
//     void par(){
//         cout<<"this is Parent";
//     }   
// };
// class B: public A
// {
// public:
//     void man(){
//         cout<<"this is B";
//     }   
// };

// class C:public B
// {
// public:
//     void simple(){
//         cout<<"this is child";
//     }
// };
// int main()
// {
//     C A;
//     A.par();
//     return 0;
// }


// 4. Heirarchycal : when more than 1 class is derived from parent class and goes on is called heira...
// class A
// {
// public:
//     void par(){
//         cout<<"this is Parent";
//     }   
// };
// class B:public A
// {
// public:
//     void man(){
//         cout<<"this is B";
//     }   
// };

// class C:public A
// {
// public:
//     void simple(){
//         cout<<"this is child";
//     }
// };
// int main()
// {
//     C A;
//     A.par();
//     return 0;
// }


// 5. Hybrid --> 1 is derived from 2 others one of other is a derived from some another
class A
{
public:
    void par(){
        cout<<"this is Parent";
    }   
};
class B:public A
{
public:
    void man(){
        cout<<"this is B";
    }   
};

class C
{
public:
    void simple(){
        cout<<"this is child";
    }
};
class D: public B, public C
{
public:
    void sam(){
        cout<<"this is child";
    }
};
int main()
{
    return 0;
}
