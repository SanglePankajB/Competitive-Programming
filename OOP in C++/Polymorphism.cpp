// Polymorphism:
// 1. Compiled time(Static) --->👻i)Method overloading (e.g len()) (funciton with same name within same class with 
//                                                          different parameters)

//                     👻ii)Operator overloading (Operators '=' and '&' are already overloaded in C++)
//                          (making operators behave different than usual)

// 2. Run time(Dynamic)  ----> 👻i)Method Overriding (function with same name & parameters but in derived class)
//                          (It is adding extra features to preexisting method in child class obviously)
//                             (there is no methode overriding without a derived class)

//                    👻ii) virtual function 


// In Method Overriding you should always remember inheritance


#include<bits/stdc++.h>
using namespace std;

class parent{
    int a = 1;
    public:
    int b = 3;
};
class child:private parent{
    public:
    int c = 3;
};
class g:public child{
    public:
    int m = 3;
};

int main()
{
    child a;
    g b;

    return 0;
}