#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Func1"<<endl;
    }
};
class B: public A{
    public:
    void func2(){
        cout<<"Func2"<<endl;
    }
};
class C: public A{
    public:
    void func3(){
        cout<<"Func3"<<endl;
    }
};

int main(){
    A ank;
    ank.func1();
    
    B boy;
    boy.func1();
    boy.func2();

    C cat;
    cat.func1();
    cat.func3();

    return 0;
}
// Func1
// Func1
// Func2
// Func1
// Func3