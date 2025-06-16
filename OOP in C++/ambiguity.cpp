// Ambiguity is imp concept in oop(ambiguity -->multiple inheritance)

// ----> It is when we are having multiple inheritance and we're having function with same name in both parent classes then compiler dont understand which funciton to call when we try to call function with creation of object, here ambiguity occurs

// e.g

#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    void abc(){
        cout<<"Hi";
    }

};

class B
{
public:
    void abc(){
        cout<<"Hi";
    }
    
};

class C: public A, public B
{
public:

};


int main()
{
//   Now if we create object of c, and call the function abc compiler will not understand from which class to call funciton, so this is ambiguity

    C obj;
    // obj.abc();      // Can't call this way
    obj.A::abc();       // can call this way to avoid ambiguity
    obj.B::abc();       // can call this way


    return 0;
}
