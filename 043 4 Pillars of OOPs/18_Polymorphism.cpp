#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello Guys!"<<endl;
    }
    int sayHello(char name){
        cout<<"Good Morning Guys!"<<endl;
        return 1;
    }
    void sayHello(string name){
        cout<<"Good Night Guys!"<<endl;
    }
};

class B{
    public:
    int a,b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Output: "<<value2-value1<<endl;
        cout<<"Hello Fans!"<<endl;
    }

    void operator() (){
        cout<<"Inside for Brackets."<<endl;
    }
};

class Animal{
    public:
    void speak(){
        cout<<"Speaking.."<<endl;
    }
};
class Dog: public Animal{
    public:
    void speak(){
        cout<<"Barking.."<<endl;
    }
};

int main(){
    Dog obj;
    obj.speak();

    B obj1, obj2;
    obj1.a=4;
    obj2.a=7;

    obj1+obj2;
    obj1();

    A obj3;
    obj3.sayHello();

    return 0;
}
// Barking..
// Output: 3
// Hello Fans!
// Inside for Brackets.
// Hello Guys!