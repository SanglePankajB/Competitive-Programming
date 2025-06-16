#include<bits/stdc++.h>
using namespace std;

class A{

    public:
    int age = 20;

    void ex(int age){
        this->age = age;        // this->age means global age at line 7. We're making it equal to current
        cout<<"This is age of ex: "<<age<<endl;
        cout<<"this is this: "<<this->age<<endl;
    }

    void normal(){
        cout<<"Normal Values of age : "<<age<<endl;
    }
};

int main()
{
    A obj;
    obj.normal();
    obj.ex(15);
    obj.normal();
    cout<<endl;

    A* obj1 = new A;          // dynamically created obj
    cout<<obj1->age<<endl;      // this is how we access data of dynamically created obj

    return 0;
}