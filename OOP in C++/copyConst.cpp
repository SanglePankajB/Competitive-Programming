#include<bits/stdc++.h>
using namespace std;

class A{
            // we cant create object of constructor created inside private
public:

    string name = "pankaj";
    int age = 21;
    A(){
        cout<<"This is constructor"<<endl;
    }

// Explicitely declaring copy construntor :
    A(A& temp){          // Syntax for copy const(never forget &)    // To avoid going infinite loop we use &
        this->name = temp.name;     // here temp referes to obj1
        this->age = temp.age;       // meaning of line is 'age of new obj = age of previos obj'
    }

};

int main()
{
    
    A obj1;
    A obj2(obj1);

    return 0;
}