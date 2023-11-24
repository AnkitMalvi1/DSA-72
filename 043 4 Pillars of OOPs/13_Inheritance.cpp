#include<iostream>
using namespace std;

class Human{
    private:
    int height;

    public:
    int weight;

    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w; 
    }
};

class Male: private Human{
    public:
    string color;

    void sleep(){
        cout<<"sleeping."<<endl;
    }

    // int getHeight(){
    //     return this->height;
    // }
};

int main(){
    Male m1;
    // cout<< m1.health<<endl;
    Male m2;
    // cout<<m2.age<<endl;
    // cout<<m2.weight<<endl;
    // cout<<m2.height<<endl;
    cout<<m2.color<<endl;
    // m2.setWeight(50);
    // cout<<m2.weight<<endl;
    m2.sleep();

    return 0;
}

// sleeping.