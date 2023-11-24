#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak1(){
        cout<<"Barking.."<<endl;
    }
};
class Human{
    public:
    string color;

    public:
    void speak2(){
        cout<<"Speaking.."<<endl;
    }
};

class Alien: public Animal, public Human{
    
};

int main(){
    Alien a;
    a.speak1();
    a.speak2();

    return 0;
}
// Barking..
// Speaking..