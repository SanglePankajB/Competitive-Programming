#include<bits/stdc++.h>
using namespace std;

class test
{
private:
    int a;
public:
    void modify(int x){
        a = x;
    }
    void geta(){
        cout<<a;
    }

    void t(){
        cout<<"In Parent";
    }
    
};
class child: public test{
    int a = 15;
public:
    void t(){
        cout<<"In Child";
    }
    void print(){
        cout<<a;
    }

};

int main()
{
    child A;
    // A.t();
    A.modify(10);
    A.print();
    A.geta();


    return 0;
}