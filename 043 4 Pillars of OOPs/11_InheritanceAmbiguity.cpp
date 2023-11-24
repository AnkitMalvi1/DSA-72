#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"A for First"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"B for Second"<<endl;
    }
};

class C: public A, public B{

};

int main(){
    C obj;
    // obj.func();
    obj.A::func();
    obj.B::func();

    return 0;
}

// A for First
// B for Second