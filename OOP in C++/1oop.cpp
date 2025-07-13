// Syntax: 

//In OOP there are access modifiers: Public, Private and Protected

// Data Members: variable(attributes), methodes, etc are called as data members of class

#include<bits/stdc++.h>
using namespace std;

class A{
    string s = "Pankaj";        // By default everything is private

public:                             // to make data members pulic

    string p = "This is public...!";

    void pubFun(){
        cout<<"we're in public function.";
    }
    
};

int main()
{
    A obj;          // creation of object

//  In this code we dont have the constructor, here comes the concept of default constructor which is actually getting called every time we create object

//  Construntor TYPES:
//      1. Default constructor (in above e.g when we dont explicitely create it is default)
//      2. Parameterized constructor (when we explicitely create it with some parameters)
//      3. Non-Parameterized constructor (when we explicitely create it with no parameters)
//      2. Copy constructor 

    return 0;
}


//   Copy constructor:
// 1. A copy constructor is a member function that initializes an object using another object of the same class.
// 2. Copy constructor is used to to create the new object by copying the members of an already existing object.
// 3. The copy constructor can be defined explicitly by the programmer. If is not defined, the compiler does it for us.

// syntax:      classname obj_name(preexisted_objName) e.g  Parent cpobj(Obj1);

