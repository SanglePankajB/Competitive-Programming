#include<bits/stdc++.h>
using namespace std;

class A{

public:

    string name = "pankaj";
    int age = 21;
    A(string name, int age){
        cout<<"I'm "<<name<<", "<<age<<" Years old."<<endl;
    }
    void Intro(){
        cout<<"we are in INtro ."<<name<<" "<< age<<endl;
    }

};

int main()
{
    
    A obj1("Pankaj", 21);
    A obj2(obj1);
    obj1.name = "Siddhesh";
    obj1.age = 18;

    obj1.Intro();
    obj2.Intro();


    return 0;
}

// It should be shallow copy but it is deep copy